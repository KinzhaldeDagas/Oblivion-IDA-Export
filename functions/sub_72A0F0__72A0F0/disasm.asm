0x72A0F0: sub     esp, 24h
0x72A0F3: push    ebx
0x72A0F4: mov     ebx, [esp+28h+arg_0]
0x72A0F8: test    ebx, ebx
0x72A0FA: push    ebp
0x72A0FB: mov     ebp, ecx
0x72A0FD: jg      short loc_72A126
0x72A0FF: mov     eax, ds:0B3F9A8h
0x72A104: fldz
0x72A106: mov     [ebp+0], eax
0x72A109: mov     ecx, ds:0B3F9ACh
0x72A10F: mov     [ebp+4], ecx
0x72A112: mov     edx, ds:0B3F9B0h
0x72A118: fstp    dword ptr [ebp+0Ch]
0x72A11B: mov     [ebp+8], edx
0x72A11E: pop     ebp
0x72A11F: pop     ebx
0x72A120: add     esp, 24h
0x72A123: retn    8
0x72A126: push    esi
0x72A127: push    edi
0x72A128: mov     edi, [esp+34h+arg_4]
0x72A12C: mov     eax, [edi]
0x72A12E: mov     ecx, [edi+4]
0x72A131: mov     edx, [edi+8]
0x72A134: mov     [esp+34h+var_18], eax
0x72A138: mov     [esp+34h+var_24], eax
0x72A13C: lea     eax, [ebx-1]
0x72A13F: cmp     eax, 4
0x72A142: mov     [esp+34h+var_14], ecx
0x72A146: mov     [esp+34h+var_10], edx
0x72A14A: mov     [esp+34h+var_20], ecx
0x72A14E: mov     [esp+34h+var_1C], edx
0x72A152: mov     esi, 1
0x72A157: jl      loc_72A385
0x72A15D: lea     edx, [ebx-5]
0x72A160: shr     edx, 2
0x72A163: add     edx, esi
0x72A165: lea     ecx, [edi+14h]
0x72A168: lea     esi, ds:1[edx*4]
0x72A16F: nop
0x72A170: fld     dword ptr [ecx-8]
0x72A173: fld     [esp+34h+var_18]
0x72A177: fcomp   st(1)
0x72A179: fnstsw  ax
0x72A17B: test    ah, 41h
0x72A17E: jnz     short loc_72A187
0x72A180: fld     dword ptr [ecx-8]
0x72A183: fstp    [esp+34h+var_18]
0x72A187: fld     dword ptr [ecx-4]
0x72A18A: fld     [esp+34h+var_14]
0x72A18E: fcomp   st(1)
0x72A190: fnstsw  ax
0x72A192: test    ah, 41h
0x72A195: jnz     short loc_72A19E
0x72A197: fld     dword ptr [ecx-4]
0x72A19A: fstp    [esp+34h+var_14]
0x72A19E: fld     dword ptr [ecx]
0x72A1A0: fld     [esp+34h+var_10]
0x72A1A4: fcomp   st(1)
0x72A1A6: fnstsw  ax
0x72A1A8: test    ah, 41h
0x72A1AB: jnz     short loc_72A1B3
0x72A1AD: fld     dword ptr [ecx]
0x72A1AF: fstp    [esp+34h+var_10]
0x72A1B3: fld     [esp+34h+var_24]
0x72A1B7: fcomp   st(3)
0x72A1B9: fnstsw  ax
0x72A1BB: fstp    st(2)
0x72A1BD: test    ah, 5
0x72A1C0: jp      short loc_72A1C9
0x72A1C2: fld     dword ptr [ecx-8]
0x72A1C5: fstp    [esp+34h+var_24]
0x72A1C9: fld     [esp+34h+var_20]
0x72A1CD: fcompp
0x72A1CF: fnstsw  ax
0x72A1D1: test    ah, 5
0x72A1D4: jp      short loc_72A1DD
0x72A1D6: fld     dword ptr [ecx-4]
0x72A1D9: fstp    [esp+34h+var_20]
0x72A1DD: fld     [esp+34h+var_1C]
0x72A1E1: fcompp
0x72A1E3: fnstsw  ax
0x72A1E5: test    ah, 5
0x72A1E8: jp      short loc_72A1F0
0x72A1EA: fld     dword ptr [ecx]
0x72A1EC: fstp    [esp+34h+var_1C]
0x72A1F0: fld     dword ptr [ecx+4]
0x72A1F3: fld     [esp+34h+var_18]
0x72A1F7: fcomp   st(1)
0x72A1F9: fnstsw  ax
0x72A1FB: test    ah, 41h
0x72A1FE: jnz     short loc_72A207
0x72A200: fld     dword ptr [ecx+4]
0x72A203: fstp    [esp+34h+var_18]
0x72A207: fld     dword ptr [ecx+8]
0x72A20A: fld     [esp+34h+var_14]
0x72A20E: fcomp   st(1)
0x72A210: fnstsw  ax
0x72A212: test    ah, 41h
0x72A215: jnz     short loc_72A21E
0x72A217: fld     dword ptr [ecx+8]
0x72A21A: fstp    [esp+34h+var_14]
0x72A21E: fld     dword ptr [ecx+0Ch]
0x72A221: fld     [esp+34h+var_10]
0x72A225: fcomp   st(1)
0x72A227: fnstsw  ax
0x72A229: test    ah, 41h
0x72A22C: jnz     short loc_72A235
0x72A22E: fld     dword ptr [ecx+0Ch]
0x72A231: fstp    [esp+34h+var_10]
0x72A235: fld     [esp+34h+var_24]
0x72A239: fcomp   st(3)
0x72A23B: fnstsw  ax
0x72A23D: fstp    st(2)
0x72A23F: test    ah, 5
0x72A242: jp      short loc_72A24B
0x72A244: fld     dword ptr [ecx+4]
0x72A247: fstp    [esp+34h+var_24]
0x72A24B: fld     [esp+34h+var_20]
0x72A24F: fcompp
0x72A251: fnstsw  ax
0x72A253: test    ah, 5
0x72A256: jp      short loc_72A25F
0x72A258: fld     dword ptr [ecx+8]
0x72A25B: fstp    [esp+34h+var_20]
0x72A25F: fld     [esp+34h+var_1C]
0x72A263: fcompp
0x72A265: fnstsw  ax
0x72A267: test    ah, 5
0x72A26A: jp      short loc_72A273
0x72A26C: fld     dword ptr [ecx+0Ch]
0x72A26F: fstp    [esp+34h+var_1C]
0x72A273: fld     dword ptr [ecx+10h]
0x72A276: fld     [esp+34h+var_18]
0x72A27A: fcomp   st(1)
0x72A27C: fnstsw  ax
0x72A27E: test    ah, 41h
0x72A281: jnz     short loc_72A28A
0x72A283: fld     dword ptr [ecx+10h]
0x72A286: fstp    [esp+34h+var_18]
0x72A28A: fld     dword ptr [ecx+14h]
0x72A28D: fld     [esp+34h+var_14]
0x72A291: fcomp   st(1)
0x72A293: fnstsw  ax
0x72A295: test    ah, 41h
0x72A298: jnz     short loc_72A2A1
0x72A29A: fld     dword ptr [ecx+14h]
0x72A29D: fstp    [esp+34h+var_14]
0x72A2A1: fld     dword ptr [ecx+18h]
0x72A2A4: fld     [esp+34h+var_10]
0x72A2A8: fcomp   st(1)
0x72A2AA: fnstsw  ax
0x72A2AC: test    ah, 41h
0x72A2AF: jnz     short loc_72A2B8
0x72A2B1: fld     dword ptr [ecx+18h]
0x72A2B4: fstp    [esp+34h+var_10]
0x72A2B8: fld     [esp+34h+var_24]
0x72A2BC: fcomp   st(3)
0x72A2BE: fnstsw  ax
0x72A2C0: fstp    st(2)
0x72A2C2: test    ah, 5
0x72A2C5: jp      short loc_72A2CE
0x72A2C7: fld     dword ptr [ecx+10h]
0x72A2CA: fstp    [esp+34h+var_24]
0x72A2CE: fld     [esp+34h+var_20]
0x72A2D2: fcompp
0x72A2D4: fnstsw  ax
0x72A2D6: test    ah, 5
0x72A2D9: jp      short loc_72A2E2
0x72A2DB: fld     dword ptr [ecx+14h]
0x72A2DE: fstp    [esp+34h+var_20]
0x72A2E2: fld     [esp+34h+var_1C]
0x72A2E6: fcompp
0x72A2E8: fnstsw  ax
0x72A2EA: test    ah, 5
0x72A2ED: jp      short loc_72A2F6
0x72A2EF: fld     dword ptr [ecx+18h]
0x72A2F2: fstp    [esp+34h+var_1C]
0x72A2F6: fld     dword ptr [ecx+1Ch]
0x72A2F9: fld     [esp+34h+var_18]
0x72A2FD: fcomp   st(1)
0x72A2FF: fnstsw  ax
0x72A301: test    ah, 41h
0x72A304: jnz     short loc_72A30D
0x72A306: fld     dword ptr [ecx+1Ch]
0x72A309: fstp    [esp+34h+var_18]
0x72A30D: fld     dword ptr [ecx+20h]
0x72A310: fld     [esp+34h+var_14]
0x72A314: fcomp   st(1)
0x72A316: fnstsw  ax
0x72A318: test    ah, 41h
0x72A31B: jnz     short loc_72A324
0x72A31D: fld     dword ptr [ecx+20h]
0x72A320: fstp    [esp+34h+var_14]
0x72A324: fld     dword ptr [ecx+24h]
0x72A327: fld     [esp+34h+var_10]
0x72A32B: fcomp   st(1)
0x72A32D: fnstsw  ax
0x72A32F: test    ah, 41h
0x72A332: jnz     short loc_72A33B
0x72A334: fld     dword ptr [ecx+24h]
0x72A337: fstp    [esp+34h+var_10]
0x72A33B: fld     [esp+34h+var_24]
0x72A33F: fcomp   st(3)
0x72A341: fnstsw  ax
0x72A343: fstp    st(2)
0x72A345: test    ah, 5
0x72A348: jp      short loc_72A351
0x72A34A: fld     dword ptr [ecx+1Ch]
0x72A34D: fstp    [esp+34h+var_24]
0x72A351: fld     [esp+34h+var_20]
0x72A355: fcompp
0x72A357: fnstsw  ax
0x72A359: test    ah, 5
0x72A35C: jp      short loc_72A365
0x72A35E: fld     dword ptr [ecx+20h]
0x72A361: fstp    [esp+34h+var_20]
0x72A365: fld     [esp+34h+var_1C]
0x72A369: fcompp
0x72A36B: fnstsw  ax
0x72A36D: test    ah, 5
0x72A370: jp      short loc_72A379
0x72A372: fld     dword ptr [ecx+24h]
0x72A375: fstp    [esp+34h+var_1C]
0x72A379: add     ecx, 30h ; '0'
0x72A37C: sub     edx, 1
0x72A37F: jnz     loc_72A170
0x72A385: cmp     esi, ebx
0x72A387: jge     loc_72A42C
0x72A38D: lea     ecx, [esi+esi*2]
0x72A390: mov     edx, ebx
0x72A392: lea     ecx, [edi+ecx*4+8]
0x72A396: sub     edx, esi
0x72A398: jmp     short loc_72A3A0
0x72A39A: align 10h
0x72A3A0: fld     dword ptr [ecx-8]
0x72A3A3: fld     [esp+34h+var_18]
0x72A3A7: fcomp   st(1)
0x72A3A9: fnstsw  ax
0x72A3AB: test    ah, 41h
0x72A3AE: jnz     short loc_72A3B7
0x72A3B0: fld     dword ptr [ecx-8]
0x72A3B3: fstp    [esp+34h+var_18]
0x72A3B7: fld     dword ptr [ecx-4]
0x72A3BA: fld     [esp+34h+var_14]
0x72A3BE: fcomp   st(1)
0x72A3C0: fnstsw  ax
0x72A3C2: test    ah, 41h
0x72A3C5: jnz     short loc_72A3CE
0x72A3C7: fld     dword ptr [ecx-4]
0x72A3CA: fstp    [esp+34h+var_14]
0x72A3CE: fld     dword ptr [ecx]
0x72A3D0: fld     [esp+34h+var_10]
0x72A3D4: fcomp   st(1)
0x72A3D6: fnstsw  ax
0x72A3D8: test    ah, 41h
0x72A3DB: jnz     short loc_72A3E3
0x72A3DD: fld     dword ptr [ecx]
0x72A3DF: fstp    [esp+34h+var_10]
0x72A3E3: fld     [esp+34h+var_24]
0x72A3E7: fcomp   st(3)
0x72A3E9: fnstsw  ax
0x72A3EB: fstp    st(2)
0x72A3ED: test    ah, 5
0x72A3F0: jp      short loc_72A3F9
0x72A3F2: fld     dword ptr [ecx-8]
0x72A3F5: fstp    [esp+34h+var_24]
0x72A3F9: fld     [esp+34h+var_20]
0x72A3FD: fcompp
0x72A3FF: fnstsw  ax
0x72A401: test    ah, 5
0x72A404: jp      short loc_72A40D
0x72A406: fld     dword ptr [ecx-4]
0x72A409: fstp    [esp+34h+var_20]
0x72A40D: fld     [esp+34h+var_1C]
0x72A411: fcompp
0x72A413: fnstsw  ax
0x72A415: test    ah, 5
0x72A418: jp      short loc_72A420
0x72A41A: fld     dword ptr [ecx]
0x72A41C: fstp    [esp+34h+var_1C]
0x72A420: add     ecx, 0Ch
0x72A423: sub     edx, 1
0x72A426: jnz     loc_72A3A0
0x72A42C: fld     [esp+34h+var_24]
0x72A430: xor     esi, esi
0x72A432: cmp     ebx, 4
0x72A435: fadd    [esp+34h+var_18]
0x72A439: fstp    [esp+34h+var_C]
0x72A43D: fld     [esp+34h+var_20]
0x72A441: fadd    [esp+34h+var_14]
0x72A445: fstp    [esp+34h+var_8]
0x72A449: fld     [esp+34h+var_1C]
0x72A44D: fadd    [esp+34h+var_10]
0x72A451: fstp    [esp+34h+var_4]
0x72A455: fld     [esp+34h+var_C]
0x72A459: fld     qword ptr ds:0A2FAA0h
0x72A45F: fmul    st(1), st
0x72A461: fxch    st(1)
0x72A463: fstp    [esp+34h+var_18]
0x72A467: mov     edx, [esp+34h+var_18]
0x72A46B: fld     [esp+34h+var_8]
0x72A46F: mov     [ebp+0], edx
0x72A472: fmul    st, st(1)
0x72A474: fstp    [esp+34h+var_14]
0x72A478: mov     eax, [esp+34h+var_14]
0x72A47C: mov     [ebp+4], eax
0x72A47F: fmul    [esp+34h+var_4]
0x72A483: fstp    [esp+34h+var_10]
0x72A487: mov     ecx, [esp+34h+var_10]
0x72A48B: fldz
0x72A48D: mov     [ebp+8], ecx
0x72A490: fstp    [esp+34h+arg_0]
0x72A494: jl      loc_72A617
0x72A49A: fld     dword ptr [ebp+0]
0x72A49D: lea     edx, [ebx-4]
0x72A4A0: fld     dword ptr [ebp+4]
0x72A4A3: shr     edx, 2
0x72A4A6: fld     dword ptr [ebp+8]
0x72A4A9: add     edx, 1
0x72A4AC: lea     ecx, [edi+14h]
0x72A4AF: lea     esi, ds:0[edx*4]
0x72A4B6: fld     dword ptr [ecx-14h]
0x72A4B9: fsub    st, st(3)
0x72A4BB: fstp    [esp+34h+var_18]
0x72A4BF: fld     dword ptr [ecx-10h]
0x72A4C2: fsub    st, st(2)
0x72A4C4: fstp    [esp+34h+var_14]
0x72A4C8: fld     dword ptr [ecx-0Ch]
0x72A4CB: fsub    st, st(1)
0x72A4CD: fstp    [esp+34h+var_10]
0x72A4D1: fld     [esp+34h+var_14]
0x72A4D5: fld     [esp+34h+var_18]
0x72A4D9: fld     [esp+34h+var_10]
0x72A4DD: fld     st(1)
0x72A4DF: fmulp   st(2), st
0x72A4E1: fld     st(2)
0x72A4E3: fmulp   st(3), st
0x72A4E5: fxch    st(1)
0x72A4E7: faddp   st(2), st
0x72A4E9: fmul    st, st
0x72A4EB: faddp   st(1), st
0x72A4ED: fstp    [esp+34h+arg_4]
0x72A4F1: fld     [esp+34h+arg_4]
0x72A4F5: fld     [esp+34h+arg_0]
0x72A4F9: fcomp   st(1)
0x72A4FB: fnstsw  ax
0x72A4FD: test    ah, 5
0x72A500: jp      short loc_72A508
0x72A502: fstp    [esp+34h+arg_0]
0x72A506: jmp     short loc_72A50A
0x72A508: fstp    st
0x72A50A: fld     dword ptr [ecx-8]
0x72A50D: fsub    st, st(3)
0x72A50F: fstp    [esp+34h+var_18]
0x72A513: fld     dword ptr [ecx-4]
0x72A516: fsub    st, st(2)
0x72A518: fstp    [esp+34h+var_14]
0x72A51C: fld     dword ptr [ecx]
0x72A51E: fsub    st, st(1)
0x72A520: fstp    [esp+34h+var_10]
0x72A524: fld     [esp+34h+var_14]
0x72A528: fld     [esp+34h+var_18]
0x72A52C: fld     [esp+34h+var_10]
0x72A530: fld     st(1)
0x72A532: fmulp   st(2), st
0x72A534: fld     st(2)
0x72A536: fmulp   st(3), st
0x72A538: fxch    st(1)
0x72A53A: faddp   st(2), st
0x72A53C: fmul    st, st
0x72A53E: faddp   st(1), st
0x72A540: fstp    [esp+34h+arg_4]
0x72A544: fld     [esp+34h+arg_4]
0x72A548: fld     [esp+34h+arg_0]
0x72A54C: fcomp   st(1)
0x72A54E: fnstsw  ax
0x72A550: test    ah, 5
0x72A553: jp      short loc_72A55B
0x72A555: fstp    [esp+34h+arg_0]
0x72A559: jmp     short loc_72A55D
0x72A55B: fstp    st
0x72A55D: fld     dword ptr [ecx+4]
0x72A560: fsub    st, st(3)
0x72A562: fstp    [esp+34h+var_18]
0x72A566: fld     dword ptr [ecx+8]
0x72A569: fsub    st, st(2)
0x72A56B: fstp    [esp+34h+var_14]
0x72A56F: fld     dword ptr [ecx+0Ch]
0x72A572: fsub    st, st(1)
0x72A574: fstp    [esp+34h+var_10]
0x72A578: fld     [esp+34h+var_14]
0x72A57C: fld     [esp+34h+var_18]
0x72A580: fld     [esp+34h+var_10]
0x72A584: fld     st(1)
0x72A586: fmulp   st(2), st
0x72A588: fld     st(2)
0x72A58A: fmulp   st(3), st
0x72A58C: fxch    st(1)
0x72A58E: faddp   st(2), st
0x72A590: fmul    st, st
0x72A592: faddp   st(1), st
0x72A594: fstp    [esp+34h+arg_4]
0x72A598: fld     [esp+34h+arg_4]
0x72A59C: fld     [esp+34h+arg_0]
0x72A5A0: fcomp   st(1)
0x72A5A2: fnstsw  ax
0x72A5A4: test    ah, 5
0x72A5A7: jp      short loc_72A5AF
0x72A5A9: fstp    [esp+34h+arg_0]
0x72A5AD: jmp     short loc_72A5B1
0x72A5AF: fstp    st
0x72A5B1: fld     dword ptr [ecx+10h]
0x72A5B4: fsub    st, st(3)
0x72A5B6: fstp    [esp+34h+var_18]
0x72A5BA: fld     dword ptr [ecx+14h]
0x72A5BD: fsub    st, st(2)
0x72A5BF: fstp    [esp+34h+var_14]
0x72A5C3: fld     dword ptr [ecx+18h]
0x72A5C6: fsub    st, st(1)
0x72A5C8: fstp    [esp+34h+var_10]
0x72A5CC: fld     [esp+34h+var_14]
0x72A5D0: fld     [esp+34h+var_18]
0x72A5D4: fld     [esp+34h+var_10]
0x72A5D8: fld     st(1)
0x72A5DA: fmulp   st(2), st
0x72A5DC: fld     st(2)
0x72A5DE: fmulp   st(3), st
0x72A5E0: fxch    st(1)
0x72A5E2: faddp   st(2), st
0x72A5E4: fmul    st, st
0x72A5E6: faddp   st(1), st
0x72A5E8: fstp    [esp+34h+arg_4]
0x72A5EC: fld     [esp+34h+arg_4]
0x72A5F0: fld     [esp+34h+arg_0]
0x72A5F4: fcomp   st(1)
0x72A5F6: fnstsw  ax
0x72A5F8: test    ah, 5
0x72A5FB: jp      short loc_72A603
0x72A5FD: fstp    [esp+34h+arg_0]
0x72A601: jmp     short loc_72A605
0x72A603: fstp    st
0x72A605: add     ecx, 30h ; '0'
0x72A608: sub     edx, 1
0x72A60B: jnz     loc_72A4B6
0x72A611: fstp    st(2)
0x72A613: fstp    st
0x72A615: fstp    st
0x72A617: cmp     esi, ebx
0x72A619: jge     short loc_72A690
0x72A61B: fld     dword ptr [ebp+0]
0x72A61E: lea     edx, [esi+esi*2]
0x72A621: fld     dword ptr [ebp+4]
0x72A624: sub     ebx, esi
0x72A626: fld     dword ptr [ebp+8]
0x72A629: lea     ecx, [edi+edx*4+8]
0x72A62D: mov     edx, ebx
0x72A62F: fld     dword ptr [ecx-8]
0x72A632: fsub    st, st(3)
0x72A634: fstp    [esp+34h+var_18]
0x72A638: fld     dword ptr [ecx-4]
0x72A63B: fsub    st, st(2)
0x72A63D: fstp    [esp+34h+var_14]
0x72A641: fld     dword ptr [ecx]
0x72A643: fsub    st, st(1)
0x72A645: fstp    [esp+34h+var_10]
0x72A649: fld     [esp+34h+var_14]
0x72A64D: fld     [esp+34h+var_18]
0x72A651: fld     [esp+34h+var_10]
0x72A655: fld     st(1)
0x72A657: fmulp   st(2), st
0x72A659: fld     st(2)
0x72A65B: fmulp   st(3), st
0x72A65D: fxch    st(1)
0x72A65F: faddp   st(2), st
0x72A661: fmul    st, st
0x72A663: faddp   st(1), st
0x72A665: fstp    [esp+34h+arg_4]
0x72A669: fld     [esp+34h+arg_4]
0x72A66D: fld     [esp+34h+arg_0]
0x72A671: fcomp   st(1)
0x72A673: fnstsw  ax
0x72A675: test    ah, 5
0x72A678: jp      short loc_72A680
0x72A67A: fstp    [esp+34h+arg_0]
0x72A67E: jmp     short loc_72A682
0x72A680: fstp    st
0x72A682: add     ecx, 0Ch
0x72A685: sub     edx, 1
0x72A688: jnz     short loc_72A62F
0x72A68A: fstp    st(2)
0x72A68C: fstp    st
0x72A68E: fstp    st
0x72A690: fld     [esp+34h+arg_0]
0x72A694: call    __CIsqrt
0x72A699: fstp    [esp+34h+arg_0]
0x72A69D: fld     [esp+34h+arg_0]
0x72A6A1: pop     edi
0x72A6A2: pop     esi
0x72A6A3: fstp    dword ptr [ebp+0Ch]
0x72A6A6: pop     ebp
0x72A6A7: pop     ebx
0x72A6A8: add     esp, 24h
0x72A6AB: retn    8
