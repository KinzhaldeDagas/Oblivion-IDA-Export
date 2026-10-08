0x6EE130: push    ecx; Returns out = this * (1/divisor) through FaceGenMatrix_Scale. No zero/finite divisor guard here. FanControls precompute supplies vector length after its own assertion.
0x6EE131: fld     [esp+4+divisor]
0x6EE135: push    esi
0x6EE136: fld1
0x6EE138: mov     esi, [esp+8+out]
0x6EE13C: fdivrp  st(1), st
0x6EE13E: push    ecx
0x6EE13F: mov     [esp+0Ch+var_4], 0
0x6EE147: fstp    [esp+0Ch+divisor]
0x6EE14B: fld     [esp+0Ch+divisor]
0x6EE14F: fstp    [esp+0Ch+scale]; scale
0x6EE152: push    esi; out
0x6EE153: call    FaceGenMatrix_Scale; Matrix scalar multiply: out = this * scale. Dimensions and storage are initialized from the source matrix.
0x6EE158: mov     eax, esi
0x6EE15A: pop     esi
0x6EE15B: pop     ecx
0x6EE15C: retn    8
