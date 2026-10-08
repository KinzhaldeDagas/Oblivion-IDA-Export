0x7C5850: push    0FFFFFFFFh; Replace ShadowSceneNode+0x118 with a newly constructed ShadowSceneLight wrapper and assign its backing reference light.
0x7C5852: push    offset SEH_8C62B0
0x7C5857: mov     eax, large fs:0
0x7C585D: push    eax
0x7C585E: push    ecx
0x7C585F: push    esi
0x7C5860: mov     eax, ds:0B30AACh
0x7C5865: xor     eax, esp
0x7C5867: push    eax
0x7C5868: lea     eax, [esp+18h+var_C]
0x7C586C: mov     large fs:0, eax
0x7C5872: mov     esi, ecx
0x7C5874: mov     ecx, [esi+118h]; Release the previous strong-owned ShadowSceneNode+0x118 light-level reference wrapper, if present.
0x7C587A: test    ecx, ecx
0x7C587C: jz      short loc_7C5890
0x7C587E: mov     eax, [ecx]
0x7C5880: mov     edx, [eax]
0x7C5882: push    1
0x7C5884: call    edx
0x7C5886: mov     dword ptr [esi+118h], 0
0x7C5890: push    220h; Size
0x7C5895: call    FormHeapAlloc; Allocate the exact retail ShadowSceneLight object size, 0x220 bytes, for the reference-light wrapper.
0x7C589A: add     esp, 4
0x7C589D: mov     [esp+18h+var_10], eax
0x7C58A1: test    eax, eax
0x7C58A3: mov     [esp+18h+var_4], 0
0x7C58AB: jz      short loc_7C58B6
0x7C58AD: mov     ecx, eax; this
0x7C58AF: call    ??0ShadowSceneLight@@QAE@XZ; Construct the replacement ShadowSceneLight; the complete direct constructor-xref census contains five native callsites.
0x7C58B4: jmp     short loc_7C58B8
0x7C58B6: xor     eax, eax
0x7C58B8: mov     ecx, [esp+18h+backingLight]
0x7C58BC: push    ecx; backingLight
0x7C58BD: mov     ecx, eax; self
0x7C58BF: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x7C58C7: mov     [esi+118h], eax; Store the replacement wrapper at ShadowSceneNode+0x118 (lightLevelReference_118).
0x7C58CD: call    ShadowSceneLight_SetBackingLight; Strong-own and classify the backing NiLight. When trackBackingPosition is set, seed cached source position from the NiPointLight world translation.
0x7C58D2: mov     ecx, dword ptr [esp+18h+var_C]; Assign and strong-own the supplied sun/PlayerSceneLight backing light through ShadowSceneLight+0x100.
0x7C58D6: mov     large fs:0, ecx
0x7C58DD: pop     ecx
0x7C58DE: pop     esi
0x7C58DF: add     esp, 10h
0x7C58E2: retn    4
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
