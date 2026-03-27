0x6E4470: push    0FFFFFFFFh
0x6E4472: push    offset SEH_7F1810
0x6E4477: mov     eax, large fs:0
0x6E447D: push    eax
0x6E447E: push    ecx
0x6E447F: push    esi
0x6E4480: mov     eax, ds:0B30AACh
0x6E4485: xor     eax, esp
0x6E4487: push    eax
0x6E4488: lea     eax, [esp+18h+var_C]
0x6E448C: mov     large fs:0, eax
0x6E4492: mov     esi, ecx
0x6E4494: mov     [esp+18h+var_10], esi
0x6E4498: mov     dword ptr [esi], offset ??_7NiColorData@@6B@; const NiColorData::`vftable'
0x6E449E: mov     eax, [esi+0Ch]
0x6E44A1: test    eax, eax
0x6E44A3: mov     [esp+18h+var_4], 0
0x6E44AB: jz      short loc_6E44BD
0x6E44AD: mov     ecx, [esi+10h]
0x6E44B0: mov     ecx, ds:0B3D310h[ecx*4]
0x6E44B7: push    eax
0x6E44B8: call    ecx ; dword_B3D310
0x6E44BA: add     esp, 4
0x6E44BD: mov     ecx, esi
0x6E44BF: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6E44C7: call    NiRefObject_destr
0x6E44CC: mov     ecx, [esp+18h+var_C]
0x6E44D0: mov     large fs:0, ecx
0x6E44D7: pop     ecx
0x6E44D8: pop     esi
0x6E44D9: add     esp, 10h
0x6E44DC: retn
