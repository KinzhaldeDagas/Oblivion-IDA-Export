0x7107A0: mov     eax, [esp+arg_0]
0x7107A4: push    ebx
0x7107A5: mov     ebx, [esp+4+arg_4]
0x7107A9: push    ebp
0x7107AA: mov     ebp, [esp+8+arg_8]
0x7107AE: push    esi
0x7107AF: mov     esi, [esp+0Ch+arg_C]
0x7107B3: push    edi
0x7107B4: xor     edi, edi
0x7107B6: cmp     ebx, 4
0x7107B9: jl      loc_71091F
0x7107BF: lea     edx, [esi+0Ch]
0x7107C2: sub     esi, ebp
0x7107C4: mov     [esp+10h+arg_4], esi
0x7107C8: lea     esi, [ebx-4]
0x7107CB: shr     esi, 2
0x7107CE: add     esi, 1
0x7107D1: lea     ecx, [ebp+4]
0x7107D4: lea     edi, ds:0[esi*4]
0x7107DB: jmp     short loc_7107E0
0x7107DD: align 10h
0x7107E0: fld     dword ptr [ecx-4]
0x7107E3: mov     ebp, [esp+10h+arg_4]
0x7107E7: fmul    dword ptr [eax]
0x7107E9: fld     dword ptr [ecx]
0x7107EB: fmul    dword ptr [eax+0Ch]
0x7107EE: faddp   st(1), st
0x7107F0: fld     dword ptr [ecx+4]
0x7107F3: fmul    dword ptr [eax+18h]
0x7107F6: faddp   st(1), st
0x7107F8: fstp    dword ptr [edx-0Ch]
0x7107FB: fld     dword ptr [ecx-4]
0x7107FE: fmul    dword ptr [eax+4]
0x710801: fld     dword ptr [ecx]
0x710803: fmul    dword ptr [eax+10h]
0x710806: faddp   st(1), st
0x710808: fld     dword ptr [ecx+4]
0x71080B: fmul    dword ptr [eax+1Ch]
0x71080E: faddp   st(1), st
0x710810: fstp    dword ptr [ecx+ebp]
0x710813: fld     dword ptr [ecx-4]
0x710816: fmul    dword ptr [eax+8]
0x710819: fld     dword ptr [ecx]
0x71081B: fmul    dword ptr [eax+14h]
0x71081E: faddp   st(1), st
0x710820: fld     dword ptr [ecx+4]
0x710823: fmul    dword ptr [eax+20h]
0x710826: faddp   st(1), st
0x710828: fstp    dword ptr [edx-4]
0x71082B: fld     dword ptr [ecx+8]
0x71082E: fmul    dword ptr [eax]
0x710830: fld     dword ptr [ecx+0Ch]
0x710833: fmul    dword ptr [eax+0Ch]
0x710836: faddp   st(1), st
0x710838: fld     dword ptr [ecx+10h]
0x71083B: fmul    dword ptr [eax+18h]
0x71083E: faddp   st(1), st
0x710840: fstp    dword ptr [edx]
0x710842: fld     dword ptr [ecx+8]
0x710845: fmul    dword ptr [eax+4]
0x710848: fld     dword ptr [ecx+0Ch]
0x71084B: fmul    dword ptr [eax+10h]
0x71084E: faddp   st(1), st
0x710850: fld     dword ptr [ecx+10h]
0x710853: fmul    dword ptr [eax+1Ch]
0x710856: faddp   st(1), st
0x710858: fstp    dword ptr [edx+4]
0x71085B: fld     dword ptr [ecx+8]
0x71085E: fmul    dword ptr [eax+8]
0x710861: fld     dword ptr [ecx+0Ch]
0x710864: fmul    dword ptr [eax+14h]
0x710867: faddp   st(1), st
0x710869: fld     dword ptr [ecx+10h]
0x71086C: fmul    dword ptr [eax+20h]
0x71086F: faddp   st(1), st
0x710871: fstp    dword ptr [edx+8]
0x710874: fld     dword ptr [ecx+14h]
0x710877: fmul    dword ptr [eax]
0x710879: fld     dword ptr [ecx+18h]
0x71087C: fmul    dword ptr [eax+0Ch]
0x71087F: faddp   st(1), st
0x710881: fld     dword ptr [ecx+1Ch]
0x710884: fmul    dword ptr [eax+18h]
0x710887: faddp   st(1), st
0x710889: fstp    dword ptr [edx+0Ch]
0x71088C: fld     dword ptr [ecx+14h]
0x71088F: fmul    dword ptr [eax+4]
0x710892: fld     dword ptr [ecx+18h]
0x710895: fmul    dword ptr [eax+10h]
0x710898: faddp   st(1), st
0x71089A: fld     dword ptr [ecx+1Ch]
0x71089D: fmul    dword ptr [eax+1Ch]
0x7108A0: faddp   st(1), st
0x7108A2: fstp    dword ptr [edx+10h]
0x7108A5: fld     dword ptr [ecx+14h]
0x7108A8: fmul    dword ptr [eax+8]
0x7108AB: fld     dword ptr [ecx+18h]
0x7108AE: fmul    dword ptr [eax+14h]
0x7108B1: faddp   st(1), st
0x7108B3: fld     dword ptr [ecx+1Ch]
0x7108B6: fmul    dword ptr [eax+20h]
0x7108B9: faddp   st(1), st
0x7108BB: fstp    dword ptr [edx+14h]
0x7108BE: add     ecx, 30h ; '0'
0x7108C1: fld     dword ptr [ecx-10h]
0x7108C4: add     edx, 30h ; '0'
0x7108C7: sub     esi, 1
0x7108CA: fmul    dword ptr [eax]
0x7108CC: fld     dword ptr [ecx-0Ch]
0x7108CF: fmul    dword ptr [eax+0Ch]
0x7108D2: faddp   st(1), st
0x7108D4: fld     dword ptr [ecx-8]
0x7108D7: fmul    dword ptr [eax+18h]
0x7108DA: faddp   st(1), st
0x7108DC: fstp    dword ptr [edx-18h]
0x7108DF: fld     dword ptr [ecx-10h]
0x7108E2: fmul    dword ptr [eax+4]
0x7108E5: fld     dword ptr [ecx-0Ch]
0x7108E8: fmul    dword ptr [eax+10h]
0x7108EB: faddp   st(1), st
0x7108ED: fld     dword ptr [ecx-8]
0x7108F0: fmul    dword ptr [eax+1Ch]
0x7108F3: faddp   st(1), st
0x7108F5: fstp    dword ptr [edx-14h]
0x7108F8: fld     dword ptr [ecx-10h]
0x7108FB: fmul    dword ptr [eax+8]
0x7108FE: fld     dword ptr [ecx-0Ch]
0x710901: fmul    dword ptr [eax+14h]
0x710904: faddp   st(1), st
0x710906: fld     dword ptr [ecx-8]
0x710909: fmul    dword ptr [eax+20h]
0x71090C: faddp   st(1), st
0x71090E: fstp    dword ptr [edx-10h]
0x710911: jnz     loc_7107E0
0x710917: mov     esi, [esp+10h+arg_C]
0x71091B: mov     ebp, [esp+10h+arg_8]
0x71091F: cmp     edi, ebx
0x710921: jnb     short loc_71098B
0x710923: lea     ecx, [edi+edi*2]
0x710926: add     ecx, ecx
0x710928: add     ecx, ecx
0x71092A: lea     edx, [ecx+esi]
0x71092D: sub     esi, ebp
0x71092F: lea     ecx, [ecx+ebp+4]
0x710933: sub     ebx, edi
0x710935: fld     dword ptr [ecx-4]
0x710938: add     ecx, 0Ch
0x71093B: fmul    dword ptr [eax]
0x71093D: add     edx, 0Ch
0x710940: sub     ebx, 1
0x710943: fld     dword ptr [ecx-0Ch]
0x710946: fmul    dword ptr [eax+0Ch]
0x710949: faddp   st(1), st
0x71094B: fld     dword ptr [ecx-8]
0x71094E: fmul    dword ptr [eax+18h]
0x710951: faddp   st(1), st
0x710953: fstp    dword ptr [edx-0Ch]
0x710956: fld     dword ptr [ecx-10h]
0x710959: fmul    dword ptr [eax+4]
0x71095C: fld     dword ptr [ecx-0Ch]
0x71095F: fmul    dword ptr [eax+10h]
0x710962: faddp   st(1), st
0x710964: fld     dword ptr [ecx-8]
0x710967: fmul    dword ptr [eax+1Ch]
0x71096A: faddp   st(1), st
0x71096C: fstp    dword ptr [ecx+esi-0Ch]
0x710970: fld     dword ptr [ecx-10h]
0x710973: fmul    dword ptr [eax+8]
0x710976: fld     dword ptr [ecx-0Ch]
0x710979: fmul    dword ptr [eax+14h]
0x71097C: faddp   st(1), st
0x71097E: fld     dword ptr [ecx-8]
0x710981: fmul    dword ptr [eax+20h]
0x710984: faddp   st(1), st
0x710986: fstp    dword ptr [edx-4]
0x710989: jnz     short loc_710935
0x71098B: pop     edi
0x71098C: pop     esi
0x71098D: pop     ebp
0x71098E: pop     ebx
0x71098F: retn
