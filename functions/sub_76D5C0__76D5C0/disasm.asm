0x76D5C0: sub     esp, 20h
0x76D5C3: push    edi
0x76D5C4: mov     edi, ecx
0x76D5C6: cmp     dword ptr [edi+0Ch], 0
0x76D5CA: jz      short loc_76D5D3
0x76D5CC: mov     eax, [edi]
0x76D5CE: mov     edx, [eax+2Ch]
0x76D5D1: call    edx
0x76D5D3: cmp     dword ptr [edi+14h], 0
0x76D5D7: jnz     short loc_76D5E2
0x76D5D9: xor     al, al
0x76D5DB: pop     edi
0x76D5DC: add     esp, 20h
0x76D5DF: retn    4
0x76D5E2: push    ebx
0x76D5E3: push    ebp
0x76D5E4: push    esi
0x76D5E5: mov     esi, ds:0B3F928h
0x76D5EB: mov     eax, [esi]
0x76D5ED: mov     edx, [eax+7Ch]
0x76D5F0: mov     ecx, esi
0x76D5F2: call    edx
0x76D5F4: mov     edx, [eax]
0x76D5F6: mov     ebx, ds:0B42154h
0x76D5FC: mov     ecx, eax
0x76D5FE: mov     eax, [edx+5Ch]
0x76D601: push    0
0x76D603: call    eax
0x76D605: mov     ebp, [edi+14h]
0x76D608: mov     eax, [eax+0Ch]
0x76D60B: mov     ecx, [esi+5C0h]
0x76D611: mov     esi, [esi+5BCh]
0x76D617: mov     edx, [ebx]
0x76D619: push    ebp
0x76D61A: push    1
0x76D61C: push    2
0x76D61E: push    eax
0x76D61F: mov     eax, [edx+28h]
0x76D622: push    ecx
0x76D623: push    esi
0x76D624: push    ebx
0x76D625: call    eax
0x76D627: test    eax, eax
0x76D629: jl      short loc_76D658
0x76D62B: mov     ebp, [edi+18h]
0x76D62E: mov     eax, [edi+8]
0x76D631: mov     ecx, [eax+0Ch]
0x76D634: mov     edx, [esp+30h+arg_0]
0x76D638: mov     eax, [eax+8]
0x76D63B: mov     ebx, [edx]
0x76D63D: push    0
0x76D63F: lea     esi, [edi+0Ch]
0x76D642: push    esi
0x76D643: push    ebp
0x76D644: mov     ebp, [edi+14h]
0x76D647: push    0
0x76D649: push    0
0x76D64B: push    ebp
0x76D64C: push    ecx
0x76D64D: mov     ecx, [ebx+74h]
0x76D650: push    eax
0x76D651: push    edx
0x76D652: call    ecx
0x76D654: test    eax, eax
0x76D656: jge     short loc_76D678
0x76D658: push    eax
0x76D659: call    sub_7736F0
0x76D65E: push    eax
0x76D65F: push    offset aNidx9additiona; "NiDX9AdditionalDepthStencilBufferData::"...
0x76D664: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76D669: add     esp, 0Ch
0x76D66C: pop     esi
0x76D66D: pop     ebp
0x76D66E: pop     ebx
0x76D66F: xor     al, al
0x76D671: pop     edi
0x76D672: add     esp, 20h
0x76D675: retn    4
0x76D678: mov     eax, [esi]
0x76D67A: mov     edx, [eax]
0x76D67C: mov     edx, [edx+30h]
0x76D67F: lea     ecx, [esp+30h+a1]
0x76D683: push    ecx
0x76D684: push    eax
0x76D685: call    edx
0x76D687: test    eax, eax
0x76D689: jge     short loc_76D6A7
0x76D68B: mov     eax, [esi]
0x76D68D: mov     ecx, [eax]
0x76D68F: mov     edx, [ecx+8]
0x76D692: push    eax
0x76D693: call    edx
0x76D695: mov     dword ptr [esi], 0
0x76D69B: pop     esi
0x76D69C: pop     ebp
0x76D69D: pop     ebx
0x76D69E: xor     al, al
0x76D6A0: pop     edi
0x76D6A1: add     esp, 20h
0x76D6A4: retn    4
0x76D6A7: mov     eax, [esp+30h+a1]
0x76D6AB: push    eax; a1
0x76D6AC: call    CreateSurfaceData
0x76D6B1: add     esp, 4
0x76D6B4: pop     esi
0x76D6B5: pop     ebp
0x76D6B6: mov     [edi+10h], eax
0x76D6B9: pop     ebx
0x76D6BA: mov     al, 1
0x76D6BC: pop     edi
0x76D6BD: add     esp, 20h
0x76D6C0: retn    4
