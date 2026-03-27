0x734460: push    0FFFFFFFFh
0x734462: push    offset SEH_734460
0x734467: mov     eax, large fs:0
0x73446D: push    eax
0x73446E: sub     esp, 74h
0x734471: mov     eax, ds:0B30AACh
0x734476: xor     eax, esp
0x734478: mov     [esp+80h+var_10], eax
0x73447C: push    ebx
0x73447D: push    ebp
0x73447E: push    esi
0x73447F: push    edi
0x734480: mov     eax, ds:0B30AACh
0x734485: xor     eax, esp
0x734487: push    eax
0x734488: lea     eax, [esp+94h+var_C]
0x73448F: mov     large fs:0, eax
0x734495: mov     esi, [esp+94h+arg_0]
0x73449C: mov     eax, [esi+0Ch]
0x73449F: sub     eax, 4
0x7344A2: mov     ebp, ecx
0x7344A4: mov     [esp+94h+var_58], esi
0x7344A8: jz      short loc_7344DB
0x7344AA: sub     eax, 1
0x7344AD: jz      short loc_7344CB
0x7344AF: sub     eax, 1
0x7344B2: jz      short loc_7344BB
0x7344B4: xor     eax, eax
0x7344B6: jmp     loc_7346E2
0x7344BB: mov     dword ptr [ebp+0], offset sub_733CA0
0x7344C2: mov     dword ptr [ebp+4], offset sub_733F90
0x7344C9: jmp     short loc_7344E9
0x7344CB: mov     dword ptr [ebp+0], offset sub_733B70
0x7344D2: mov     dword ptr [ebp+4], offset sub_733F90
0x7344D9: jmp     short loc_7344E9
0x7344DB: mov     dword ptr [ebp+0], 0
0x7344E2: mov     dword ptr [ebp+4], offset sub_734170
0x7344E9: push    70h ; 'p'; Size
0x7344EB: call    FormHeapAlloc
0x7344F0: add     esp, 4
0x7344F3: mov     [esp+94h+var_64], eax
0x7344F7: xor     ecx, ecx
0x7344F9: cmp     eax, ecx
0x7344FB: mov     [esp+94h+var_4], ecx
0x734502: jz      short loc_73452A
0x734504: mov     edx, [esi+6Ch]
0x734507: mov     edi, [esi+60h]
0x73450A: mov     ecx, [esi+58h]
0x73450D: mov     ebx, [ecx]
0x73450F: mov     ecx, [esi+54h]
0x734512: mov     ecx, [ecx]
0x734514: push    edx
0x734515: push    edi
0x734516: push    offset unk_B25E00
0x73451B: push    ebx
0x73451C: push    ecx
0x73451D: mov     ecx, eax
0x73451F: call    NiPixelData__NiPixelData
0x734524: mov     [esp+94h+var_7C], eax
0x734528: jmp     short loc_734530
0x73452A: mov     [esp+94h+var_7C], ecx
0x73452E: mov     eax, ecx
0x734530: mov     ecx, [esi+6Ch]
0x734533: mov     edx, [esi+60h]
0x734536: xor     edi, edi
0x734538: test    ecx, ecx
0x73453A: mov     [esp+94h+var_4], 0FFFFFFFFh
0x734545: mov     [esp+94h+var_6C], edx
0x734549: mov     [esp+94h+var_64], ecx
0x73454D: mov     [esp+94h+var_78], edi
0x734551: jbe     loc_7346E2
0x734557: xor     edx, edx
0x734559: cmp     [esp+94h+var_6C], edx
0x73455D: mov     [esp+94h+var_74], edx
0x734561: jbe     loc_7346D3
0x734567: jmp     short loc_734574
0x734569: align 10h
0x734570: mov     edx, [esp+94h+var_74]
0x734574: mov     ecx, [esi+5Ch]
0x734577: mov     ebx, [esi+60h]
0x73457A: mov     ebx, [ecx+ebx*4]
0x73457D: imul    ebx, edi
0x734580: add     ebx, [ecx+edx*4]
0x734583: add     ebx, [esi+50h]
0x734586: mov     [ebp+8], ebx
0x734589: mov     ecx, [eax+5Ch]
0x73458C: mov     ebx, [eax+60h]
0x73458F: mov     ebx, [ecx+ebx*4]
0x734592: imul    ebx, edi
0x734595: add     ebx, [ecx+edx*4]
0x734598: add     ebx, [eax+50h]
0x73459B: mov     eax, [esi+54h]
0x73459E: mov     ecx, [eax+edx*4]
0x7345A1: mov     eax, [esi+58h]
0x7345A4: mov     eax, [eax+edx*4]
0x7345A7: mov     edx, ecx
0x7345A9: shr     edx, 2
0x7345AC: mov     [esp+94h+var_80], edx
0x7345B0: mov     edx, eax
0x7345B2: and     eax, 3
0x7345B5: mov     edi, ecx
0x7345B7: shr     edx, 2
0x7345BA: and     edi, 3
0x7345BD: test    edx, edx
0x7345BF: mov     [esp+94h+var_70], eax
0x7345C3: lea     eax, ds:0[ecx*4]
0x7345CA: mov     [esp+94h+var_5C], edi
0x7345CE: mov     [ebp+0Ch], eax
0x7345D1: jbe     loc_734674
0x7345D7: lea     ecx, [ecx+ecx*2]
0x7345DA: add     ecx, ecx
0x7345DC: add     ecx, ecx
0x7345DE: mov     [esp+94h+var_54], ecx
0x7345E2: mov     [esp+94h+var_68], edx
0x7345E6: mov     eax, [esp+94h+var_80]
0x7345EA: test    eax, eax
0x7345EC: jbe     short loc_734653
0x7345EE: mov     [esp+94h+var_60], eax
0x7345F2: mov     eax, [ebp+0]
0x7345F5: test    eax, eax
0x7345F7: mov     esi, ebx
0x7345F9: lea     edi, [esp+94h+var_50]
0x7345FD: jz      short loc_734608
0x7345FF: lea     ecx, [esp+94h+var_4D]
0x734603: push    ecx
0x734604: mov     ecx, ebp
0x734606: call    eax
0x734608: mov     eax, [ebp+4]
0x73460B: lea     edx, [esp+94h+var_50]
0x73460F: push    edx
0x734610: mov     ecx, ebp
0x734612: call    eax
0x734614: mov     eax, 4
0x734619: lea     esp, [esp+0]
0x734620: mov     ecx, [edi]
0x734622: mov     [esi], ecx
0x734624: mov     edx, [edi+4]
0x734627: mov     [esi+4], edx
0x73462A: mov     ecx, [edi+8]
0x73462D: mov     [esi+8], ecx
0x734630: mov     edx, [edi+0Ch]
0x734633: mov     [esi+0Ch], edx
0x734636: add     esi, [ebp+0Ch]
0x734639: add     edi, 10h
0x73463C: sub     eax, 1
0x73463F: jnz     short loc_734620
0x734641: add     ebx, 10h
0x734644: sub     [esp+94h+var_60], 1
0x734649: jnz     short loc_7345F2
0x73464B: mov     esi, [esp+94h+var_58]
0x73464F: mov     edi, [esp+94h+var_5C]
0x734653: test    edi, edi
0x734655: jz      short loc_734665
0x734657: push    4; int
0x734659: push    edi; int
0x73465A: push    ebx; Dst
0x73465B: mov     ecx, ebp
0x73465D: call    sub_7343E0
0x734662: lea     ebx, [ebx+edi*4]
0x734665: add     ebx, [esp+94h+var_54]
0x734669: sub     [esp+94h+var_68], 1
0x73466E: jnz     loc_7345E6
0x734674: cmp     [esp+94h+var_70], 0
0x734679: jz      short loc_7346B2
0x73467B: mov     eax, [esp+94h+var_80]
0x73467F: test    eax, eax
0x734681: jbe     short loc_7346A0
0x734683: mov     [esp+94h+var_80], eax
0x734687: mov     eax, [esp+94h+var_70]
0x73468B: push    eax; int
0x73468C: push    4; int
0x73468E: push    ebx; Dst
0x73468F: mov     ecx, ebp
0x734691: call    sub_7343E0
0x734696: add     ebx, 10h
0x734699: sub     [esp+94h+var_80], 1
0x73469E: jnz     short loc_734687
0x7346A0: test    edi, edi
0x7346A2: jz      short loc_7346B2
0x7346A4: mov     ecx, [esp+94h+var_70]
0x7346A8: push    ecx; int
0x7346A9: push    edi; int
0x7346AA: push    ebx; Dst
0x7346AB: mov     ecx, ebp
0x7346AD: call    sub_7343E0
0x7346B2: mov     eax, [esp+94h+var_74]
0x7346B6: mov     edi, [esp+94h+var_78]
0x7346BA: add     eax, 1
0x7346BD: cmp     eax, [esp+94h+var_6C]
0x7346C1: mov     [esp+94h+var_74], eax
0x7346C5: mov     eax, [esp+94h+var_7C]
0x7346C9: jb      loc_734570
0x7346CF: mov     ecx, [esp+94h+var_64]
0x7346D3: add     edi, 1
0x7346D6: cmp     edi, ecx
0x7346D8: mov     [esp+94h+var_78], edi
0x7346DC: jb      loc_734557
0x7346E2: mov     ecx, dword ptr [esp+94h+var_C]
0x7346E9: mov     large fs:0, ecx
0x7346F0: pop     ecx
0x7346F1: pop     edi
0x7346F2: pop     esi
0x7346F3: pop     ebp
0x7346F4: pop     ebx
0x7346F5: mov     ecx, [esp+80h+var_10]
0x7346F9: xor     ecx, esp
0x7346FB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x734700: add     esp, 80h
0x734706: retn    4
