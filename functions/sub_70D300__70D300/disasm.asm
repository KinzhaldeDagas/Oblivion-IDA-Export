0x70D300: push    esi
0x70D301: mov     esi, ecx
0x70D303: mov     ecx, ds:0B3F928h
0x70D309: test    ecx, ecx
0x70D30B: jz      loc_70D41B
0x70D311: lea     eax, [esp+4+arg_0]
0x70D315: push    eax
0x70D316: mov     eax, [esp+8+arg_4]
0x70D31A: lea     edx, [esp+8+arg_4]
0x70D31E: push    edx
0x70D31F: mov     edx, [esp+0Ch+arg_0]
0x70D323: push    eax
0x70D324: push    edx
0x70D325: call    sub_701540
0x70D32A: test    al, al
0x70D32C: jz      loc_70D41B
0x70D332: fld     [esp+4+arg_4]
0x70D336: fld     dword ptr [esi+114h]
0x70D33C: fcomp   st(1)
0x70D33E: fnstsw  ax
0x70D340: test    ah, 5
0x70D343: jnp     loc_70D419
0x70D349: fld     dword ptr [esi+110h]
0x70D34F: fcomp   st(1)
0x70D351: fnstsw  ax
0x70D353: test    ah, 41h
0x70D356: jz      loc_70D419
0x70D35C: fld     [esp+4+arg_0]
0x70D360: fld     dword ptr [esi+118h]
0x70D366: fcomp   st(1)
0x70D368: fnstsw  ax
0x70D36A: test    ah, 5
0x70D36D: jnp     loc_70D417
0x70D373: fld     dword ptr [esi+11Ch]
0x70D379: fcomp   st(1)
0x70D37B: fnstsw  ax
0x70D37D: test    ah, 41h
0x70D380: jz      loc_70D417
0x70D386: fsub    dword ptr [esi+11Ch]
0x70D38C: mov     eax, [esp+4+arg_C]
0x70D390: fld     dword ptr [esi+118h]
0x70D396: mov     ecx, [esp+4+arg_8]
0x70D39A: fsub    dword ptr [esi+11Ch]
0x70D3A0: push    eax; int
0x70D3A1: push    ecx; int
0x70D3A2: sub     esp, 8
0x70D3A5: fdivp   st(1), st
0x70D3A7: mov     ecx, esi
0x70D3A9: fstp    [esp+14h+arg_C]
0x70D3AD: fld     [esp+14h+arg_C]
0x70D3B1: fld     dword ptr [esi+0F4h]
0x70D3B7: fsub    dword ptr [esi+0F8h]
0x70D3BD: fmulp   st(1), st
0x70D3BF: fadd    dword ptr [esi+0F8h]
0x70D3C5: fstp    [esp+14h+arg_C]
0x70D3C9: fld     [esp+14h+arg_C]
0x70D3CD: fstp    [esp+14h+var_10]; float
0x70D3D1: fsub    dword ptr [esi+110h]
0x70D3D7: fld     dword ptr [esi+114h]
0x70D3DD: fsub    dword ptr [esi+110h]
0x70D3E3: fdivp   st(1), st
0x70D3E5: fstp    [esp+14h+arg_C]
0x70D3E9: fld     [esp+14h+arg_C]
0x70D3ED: fld     dword ptr [esi+0F0h]
0x70D3F3: fsub    dword ptr [esi+0ECh]
0x70D3F9: fmulp   st(1), st
0x70D3FB: fadd    dword ptr [esi+0ECh]
0x70D401: fstp    [esp+14h+arg_C]
0x70D405: fld     [esp+14h+arg_C]
0x70D409: fstp    [esp+14h+var_14]; float
0x70D40C: call    sub_70C4D0
0x70D411: mov     al, 1
0x70D413: pop     esi
0x70D414: retn    10h
0x70D417: fstp    st
0x70D419: fstp    st
0x70D41B: xor     al, al
0x70D41D: pop     esi
0x70D41E: retn    10h
