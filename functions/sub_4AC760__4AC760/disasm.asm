0x4AC760: fld     [esp+a]; Returns min(a,b) as a single-precision float. Native callers push two floats, clean 8 bytes, and consume ST0 as float; prior double return was an x87 decompiler artifact.
0x4AC764: fld     [esp+b]
0x4AC768: fcom    st(1)
0x4AC76A: fnstsw  ax
0x4AC76C: test    ah, 41h
0x4AC76F: jnz     short loc_4AC77C
0x4AC771: fstp    st
0x4AC773: fstp    [esp+a]
0x4AC777: fld     [esp+a]
0x4AC77B: retn
0x4AC77C: fstp    st(1)
0x4AC77E: fstp    [esp+a]
0x4AC782: fld     [esp+a]
0x4AC786: retn
