0x4267B0: push    0FFFFFFFFh; Install or replace extra-data type 0x49 with an AttachedLightPayload_Decoded. Replacement releases the old payload's backing NiLight and frees that payload; creation builds an ExtraLight-style node, changes its type to 0x49, and adds it to the list.
0x4267B2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x4267B7: mov     eax, large fs:0
0x4267BD: push    eax
0x4267BE: push    ecx
0x4267BF: push    ebx
0x4267C0: push    esi
0x4267C1: push    edi
0x4267C2: mov     eax, ___security_cookie
0x4267C7: xor     eax, esp
0x4267C9: push    eax
0x4267CA: lea     eax, [esp+20h+var_C]
0x4267CE: mov     large fs:0, eax
0x4267D4: mov     ebx, ecx
0x4267D6: push    49h ; 'I'; a2
0x4267D8: call    BaseExtraList_GetExtraData; Look up existing extra-data type 0x49 before replacing or creating the spell-effect light payload node.
0x4267DD: mov     edi, eax
0x4267DF: test    edi, edi
0x4267E1: jz      short loc_426833
0x4267E3: mov     ebx, [edi+0Ch]
0x4267E6: test    ebx, ebx
0x4267E8: jz      short loc_426815
0x4267EA: mov     esi, [ebx]
0x4267EC: test    esi, esi
0x4267EE: jz      short loc_42680C
0x4267F0: lea     eax, [esi+4]
0x4267F3: push    eax; lpAddend
0x4267F4: call    ds:InterlockedDecrement
0x4267FA: test    eax, eax
0x4267FC: jnz     short loc_42680C
0x4267FE: test    esi, esi
0x426800: jz      short loc_42680C
0x426802: mov     edx, [esi]
0x426804: mov     eax, [edx]
0x426806: push    1
0x426808: mov     ecx, esi
0x42680A: call    eax
0x42680C: push    ebx
0x42680D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x426812: add     esp, 4
0x426815: mov     ecx, [esp+20h+payload]
0x426819: mov     [edi+0Ch], ecx
0x42681C: mov     eax, edi
0x42681E: mov     ecx, [esp+20h+var_C]
0x426822: mov     large fs:0, ecx
0x426829: pop     ecx
0x42682A: pop     edi
0x42682B: pop     esi
0x42682C: pop     ebx
0x42682D: add     esp, 10h
0x426830: retn    4
0x426833: push    10h; Size
0x426835: call    FormHeapAlloc
0x42683A: add     esp, 4
0x42683D: mov     [esp+20h+var_10], eax
0x426841: test    eax, eax
0x426843: mov     [esp+20h+var_4], 0
0x42684B: jz      short loc_42685D
0x42684D: mov     edx, [esp+20h+payload]
0x426851: push    edx
0x426852: mov     ecx, eax; this
0x426854: call    ??0ExtraLight@@QAE@XZ; ExtraLight::ExtraLight(void)
0x426859: mov     esi, eax
0x42685B: jmp     short loc_42685F
0x42685D: xor     esi, esi
0x42685F: push    esi; BSExtraData *
0x426860: mov     ecx, ebx; ExtraDataList *
0x426862: mov     [esp+24h+var_4], 0FFFFFFFFh
0x42686A: mov     byte ptr [esi+4], 49h ; 'I'; The newly constructed ExtraLight-style node is retagged as retail extra-data type 0x49 before insertion.
0x42686E: call    BaseExtraList_AddExtra
0x426873: mov     eax, esi
0x426875: mov     ecx, [esp+20h+var_C]
0x426879: mov     large fs:0, ecx
0x426880: pop     ecx
0x426881: pop     edi
0x426882: pop     esi
0x426883: pop     ebx
0x426884: add     esp, 10h
0x426887: retn    4
0x9CA420: mov     eax, [ebp-10h]
0x9CA423: push    eax
0x9CA424: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA429: pop     ecx
0x9CA42A: retn
0x9CA42B: mov     edx, [esp+arg_4]
0x9CA42F: lea     eax, [edx-10h]
0x9CA432: mov     ecx, [edx-14h]
0x9CA435: xor     ecx, eax
0x9CA437: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA43C: mov     eax, offset stru_AF2B24
0x9CA441: jmp     ___CxxFrameHandler3
