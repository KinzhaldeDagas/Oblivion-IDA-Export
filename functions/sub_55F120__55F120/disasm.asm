0x55F120: push    0FFFFFFFFh
0x55F122: push    offset SEH_798CC0
0x55F127: mov     eax, large fs:0
0x55F12D: push    eax
0x55F12E: sub     esp, 0Ch
0x55F131: push    ebx
0x55F132: push    ebp
0x55F133: push    esi
0x55F134: push    edi
0x55F135: mov     eax, ds:0B30AACh
0x55F13A: xor     eax, esp
0x55F13C: push    eax
0x55F13D: lea     eax, [esp+2Ch+var_C]
0x55F141: mov     large fs:0, eax
0x55F147: mov     edi, ecx
0x55F149: mov     ebx, [esp+2Ch+Comperand]
0x55F14D: mov     eax, [esp+2Ch+arg_0]
0x55F151: push    ebx; int
0x55F152: push    eax; Comperand
0x55F153: mov     [esp+34h+var_15], 1
0x55F158: xor     ebp, ebp
0x55F15A: call    sub_43A260
0x55F15F: test    al, al
0x55F161: jnz     loc_55F201
0x55F167: test    ebp, ebp
0x55F169: jnz     short loc_55F1A9
0x55F16B: push    0Ch; Size
0x55F16D: call    FormHeapAlloc
0x55F172: mov     esi, eax
0x55F174: add     esp, 4
0x55F177: mov     [esp+2Ch+var_10], esi
0x55F17B: cmp     esi, ebp
0x55F17D: mov     [esp+2Ch+var_4], ebp
0x55F181: jz      short loc_55F19D
0x55F183: mov     ecx, [edi]
0x55F185: mov     edx, [ecx]
0x55F187: mov     eax, [edx+24h]
0x55F18A: push    ebx
0x55F18B: call    eax
0x55F18D: mov     ecx, [esp+2Ch+arg_8]
0x55F191: mov     [esi+8], ebp
0x55F194: mov     [esi], eax
0x55F196: mov     edx, [ecx]
0x55F198: mov     [esi+4], edx
0x55F19B: jmp     short loc_55F19F
0x55F19D: xor     esi, esi
0x55F19F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x55F1A7: mov     ebp, esi
0x55F1A9: mov     eax, [edi+14h]
0x55F1AC: and     eax, 0FFFFFFFEh
0x55F1AF: mov     [esp+2Ch+Comperand], eax
0x55F1B3: mov     eax, [esp+2Ch+Comperand]
0x55F1B7: and     eax, 0FFFFFFFEh
0x55F1BA: mov     [esp+2Ch+Comperand], eax
0x55F1BE: mov     [esp+2Ch+Exchange], ebp
0x55F1C2: mov     ecx, [esp+2Ch+Exchange]
0x55F1C6: mov     esi, [esp+2Ch+Comperand]
0x55F1CA: mov     edx, [esp+2Ch+Comperand]
0x55F1CE: and     ecx, 0FFFFFFFEh
0x55F1D1: mov     [esp+2Ch+Exchange], ecx
0x55F1D5: mov     eax, [esp+2Ch+Exchange]
0x55F1D9: push    esi; Comperand
0x55F1DA: mov     [ebp+8], edx
0x55F1DD: mov     ecx, [edi+10h]
0x55F1E0: push    eax; Exchange
0x55F1E1: push    ecx; Destination
0x55F1E2: call    dword ptr ds:0A2813Ch
0x55F1E8: cmp     eax, esi
0x55F1EA: jz      short loc_55F229
0x55F1EC: mov     eax, [esp+2Ch+arg_0]
0x55F1F0: push    ebx; int
0x55F1F1: push    eax; Comperand
0x55F1F2: mov     ecx, edi
0x55F1F4: call    sub_43A260
0x55F1F9: test    al, al
0x55F1FB: jz      loc_55F167
0x55F201: push    ebp
0x55F202: call    FormHeapFree
0x55F207: add     esp, 4
0x55F20A: cmp     [esp+2Ch+arg_C], 0
0x55F20F: jz      short loc_55F222
0x55F211: mov     ecx, [edi+14h]
0x55F214: mov     edx, [esp+2Ch+arg_8]
0x55F218: mov     eax, [edx]
0x55F21A: and     ecx, 0FFFFFFFEh
0x55F21D: mov     [ecx+4], eax
0x55F220: jmp     short loc_55F232
0x55F222: mov     [esp+2Ch+var_15], 0
0x55F227: jmp     short loc_55F232
0x55F229: mov     ecx, [edi]
0x55F22B: mov     edx, [ecx]
0x55F22D: mov     eax, [edx+30h]
0x55F230: call    eax
0x55F232: mov     ecx, [edi+4]
0x55F235: mov     dword ptr [ecx], 0
0x55F23B: mov     edx, [edi+8]
0x55F23E: mov     dword ptr [edx], 0
0x55F244: mov     eax, [edi+0Ch]
0x55F247: mov     dword ptr [eax], 0
0x55F24D: mov     al, [esp+2Ch+var_15]
0x55F251: mov     ecx, [esp+2Ch+var_C]
0x55F255: mov     large fs:0, ecx
0x55F25C: pop     ecx
0x55F25D: pop     edi
0x55F25E: pop     esi
0x55F25F: pop     ebp
0x55F260: pop     ebx
0x55F261: add     esp, 18h
0x55F264: retn    10h
