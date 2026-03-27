0x6BE280: mov     edx, [esp+arg_10]
0x6BE284: test    edx, edx
0x6BE286: jz      loc_6BE32C
0x6BE28C: fld     [esp+arg_4]
0x6BE290: mov     ecx, [esp+arg_8]
0x6BE294: fld     dword ptr [ecx]
0x6BE296: fcomp   st(1)
0x6BE298: fnstsw  ax
0x6BE29A: test    ah, 41h
0x6BE29D: jnz     short loc_6BE2BD
0x6BE29F: mov     edx, [ecx+4]
0x6BE2A2: fstp    st
0x6BE2A4: mov     eax, [esp+arg_0]
0x6BE2A8: mov     [eax], edx
0x6BE2AA: mov     edx, [ecx+8]
0x6BE2AD: mov     [eax+4], edx
0x6BE2B0: mov     edx, [ecx+0Ch]
0x6BE2B3: mov     [eax+8], edx
0x6BE2B6: mov     ecx, [ecx+10h]
0x6BE2B9: mov     [eax+0Ch], ecx
0x6BE2BC: retn
0x6BE2BD: push    ebx
0x6BE2BE: mov     ebx, dword ptr [esp+4+arg_14]
0x6BE2C2: push    esi
0x6BE2C3: movzx   esi, bl
0x6BE2C6: lea     eax, [edx-1]
0x6BE2C9: imul    eax, esi
0x6BE2CC: fld     dword ptr [eax+ecx]
0x6BE2CF: fcomp   st(1)
0x6BE2D1: fnstsw  ax
0x6BE2D3: test    ah, 5
0x6BE2D6: jp      short loc_6BE301
0x6BE2D8: mov     eax, [esp+8+arg_0]
0x6BE2DC: fstp    st
0x6BE2DE: add     edx, 0FFFFFFFFh
0x6BE2E1: imul    edx, esi
0x6BE2E4: lea     ecx, [edx+ecx+4]
0x6BE2E8: mov     edx, [ecx]
0x6BE2EA: mov     [eax], edx
0x6BE2EC: mov     edx, [ecx+4]
0x6BE2EF: mov     [eax+4], edx
0x6BE2F2: mov     edx, [ecx+8]
0x6BE2F5: mov     [eax+8], edx
0x6BE2F8: mov     ecx, [ecx+0Ch]
0x6BE2FB: pop     esi
0x6BE2FC: mov     [eax+0Ch], ecx
0x6BE2FF: pop     ebx
0x6BE300: retn
0x6BE301: mov     esi, [esp+8+arg_0]
0x6BE305: push    ebx; char
0x6BE306: lea     eax, [esp+0Ch+arg_10]
0x6BE30A: push    eax; int
0x6BE30B: push    edx; int
0x6BE30C: mov     edx, [esp+14h+arg_C]
0x6BE310: push    edx; int
0x6BE311: push    ecx; int
0x6BE312: push    ecx
0x6BE313: fstp    [esp+20h+var_20]; float
0x6BE316: push    esi; int
0x6BE317: mov     [esp+24h+arg_10], 0
0x6BE31F: call    sub_6BE040
0x6BE324: add     esp, 1Ch
0x6BE327: mov     eax, esi
0x6BE329: pop     esi
0x6BE32A: pop     ebx
0x6BE32B: retn
0x6BE32C: mov     ecx, ds:0B3C4E8h
0x6BE332: mov     eax, [esp+arg_0]
0x6BE336: mov     [eax], ecx
0x6BE338: mov     edx, ds:0B3C4ECh
0x6BE33E: mov     [eax+4], edx
0x6BE341: mov     ecx, ds:0B3C4F0h
0x6BE347: mov     [eax+8], ecx
0x6BE34A: mov     edx, ds:0B3C4F4h
0x6BE350: mov     [eax+0Ch], edx
0x6BE353: retn
