0x943460: push    ebp
0x943461: mov     ebp, esp
0x943463: and     esp, 0FFFFFFF0h
0x943466: sub     esp, 224h
0x94346C: mov     eax, [ebp+arg_C]
0x94346F: push    ebx
0x943470: mov     dword ptr [eax], 7F7FFFFFh
0x943476: mov     eax, [ebp+arg_8]
0x943479: test    eax, eax
0x94347B: mov     ebx, ecx
0x94347D: mov     ecx, [ebp+arg_10]
0x943480: push    esi
0x943481: push    edi
0x943482: mov     dword ptr [ecx], 0FF7FFFFFh
0x943488: jle     loc_943536
0x94348E: mov     edi, [ebp+arg_4]
0x943491: add     edi, 0Ch
0x943494: mov     dword ptr [esp+230h+var_21C+8], eax
0x943498: mov     eax, [edi-0Ch]
0x94349B: mov     ecx, [ebx+8]
0x94349E: mov     edx, [ecx]
0x9434A0: lea     esi, [esp+230h+var_200]
0x9434A4: push    esi
0x9434A5: push    eax
0x9434A6: call    dword ptr [edx+28h]
0x9434A9: mov     esi, eax
0x9434AB: test    esi, esi
0x9434AD: jz      short loc_9434E3
0x9434AF: mov     ecx, [ebp+arg_0]
0x9434B2: mov     eax, [esi]
0x9434B4: push    ecx
0x9434B5: mov     ecx, esi
0x9434B7: call    dword ptr [eax+10h]
0x9434BA: fstp    dword ptr [esp+230h+var_21C+4]
0x9434BE: mov     edx, [ebp+arg_0]
0x9434C1: movaps  xmm0, xmmword ptr ds:0A965C0h
0x9434C8: movaps  xmm1, xmmword ptr [edx]
0x9434CB: mov     eax, [esi]
0x9434CD: lea     ecx, [esp+230h+var_21C+0Ch]
0x9434D1: push    ecx
0x9434D2: xorps   xmm1, xmm0
0x9434D5: mov     ecx, esi
0x9434D7: movaps  [esp+234h+var_21C+0Ch], xmm1
0x9434DC: call    dword ptr [eax+10h]
0x9434DF: fchs
0x9434E1: jmp     short loc_9434F1
0x9434E3: fld     dword ptr ds:0A2FAA8h
0x9434E9: mov     dword ptr [esp+230h+var_21C+4], 0
0x9434F1: mov     edx, dword ptr [esp+230h+var_21C+4]
0x9434F5: fst     dword ptr [edi-4]
0x9434F8: mov     ecx, [ebp+arg_C]
0x9434FB: fld     st
0x9434FD: mov     [edi], edx
0x9434FF: fcomp   dword ptr [ecx]
0x943501: fnstsw  ax
0x943503: test    ah, 5
0x943506: jp      short loc_94350C
0x943508: fstp    dword ptr [ecx]
0x94350A: jmp     short loc_94350E
0x94350C: fstp    st
0x94350E: fld     dword ptr [esp+230h+var_21C+4]
0x943512: mov     ecx, [ebp+arg_10]
0x943515: fcomp   dword ptr [ecx]
0x943517: fnstsw  ax
0x943519: test    ah, 41h
0x94351C: jnz     short loc_943524
0x94351E: mov     eax, dword ptr [esp+230h+var_21C+4]
0x943522: mov     [ecx], eax
0x943524: mov     eax, dword ptr [esp+230h+var_21C+8]
0x943528: add     edi, 10h
0x94352B: dec     eax
0x94352C: mov     dword ptr [esp+230h+var_21C+8], eax
0x943530: jnz     loc_943498
0x943536: pop     edi
0x943537: pop     esi
0x943538: pop     ebx
0x943539: mov     esp, ebp
0x94353B: pop     ebp
0x94353C: retn    14h
