0x8ABB20: push    esi
0x8ABB21: mov     esi, [esp+4+arg_0]
0x8ABB25: mov     eax, ecx
0x8ABB27: mov     ecx, [eax+14h]
0x8ABB2A: mov     edx, [ecx]
0x8ABB2C: push    esi
0x8ABB2D: mov     esi, [eax+8]
0x8ABB30: mov     esi, [esi+74h]
0x8ABB33: fld     dword ptr [esi+8]
0x8ABB36: push    ecx
0x8ABB37: fmul    dword ptr ds:0A3D65Ch
0x8ABB3D: add     eax, 70h ; 'p'
0x8ABB40: fstp    [esp+0Ch+var_C]
0x8ABB43: push    eax
0x8ABB44: call    dword ptr [edx+0Ch]
0x8ABB47: pop     esi
0x8ABB48: retn    4
