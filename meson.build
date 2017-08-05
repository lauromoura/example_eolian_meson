project('eolian_example', 'c')

# To generate/update the implementation file, on the project root run:
# $ eolian_gen -g i myobj.eo -I $EFL_ROOT/share/eolian/include -o myobj_impl
# It will write the file myobj_impl.c.

eina = dependency('eina')
eo = dependency('eo')
efl = dependency('efl')
eolian_gen = find_program('eolian_gen')

myobj_eo_c = custom_target('myobj.eo.c',
        output : 'myobj.eo', # no need to add .c, as eolian will add it.
        input : 'myobj.eo',
        command : [eolian_gen, '-g', 'hc', '@INPUT@', '-I', '/opt/efl-js/share/eolian/include/', '-o' , '@OUTPUT@'])

executable('sample',
        ['main.c', 'myobj_impl.c', myobj_eo_c],
        dependencies:[eina, eo, efl],
        c_args: '-DEFL_BETA_API_SUPPORT')
