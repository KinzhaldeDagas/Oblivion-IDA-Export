0x7C6100: push    0FFFFFFFFh
0x7C6102: push    offset SEH_7C6100
0x7C6107: mov     eax, large fs:0
0x7C610D: push    eax
0x7C610E: push    ebx
0x7C610F: push    ebp
0x7C6110: push    esi
0x7C6111: push    edi
0x7C6112: mov     eax, ds:0B30AACh
0x7C6117: xor     eax, esp
0x7C6119: push    eax
0x7C611A: lea     eax, [esp+20h+var_C]
0x7C611E: mov     large fs:0, eax
0x7C6124: mov     edi, [esp+20h+arg_4]
0x7C6128: test    edi, edi
0x7C612A: jnz     short loc_7C6169
0x7C612C: mov     ecx, [esp+20h+arg_0]
0x7C6130: push    4
0x7C6132: call    NiNode_GetNiPropertyByID
0x7C6137: mov     esi, eax
0x7C6139: test    esi, esi
0x7C613B: jz      loc_7C620B
0x7C6141: mov     eax, [esi]
0x7C6143: mov     edx, [eax+54h]
0x7C6146: mov     ecx, esi
0x7C6148: call    edx
0x7C614A: sub     eax, 0FFFFFFFFh
0x7C614D: neg     eax
0x7C614F: sbb     eax, eax
0x7C6151: and     eax, esi
0x7C6153: jz      short loc_7C6169
0x7C6155: mov     eax, [eax+1Ch]
0x7C6158: shr     eax, 1Ch
0x7C615B: movzx   eax, al
0x7C615E: push    eax
0x7C615F: call    GetShadowSceneNode
0x7C6164: add     esp, 4
0x7C6167: mov     edi, eax
0x7C6169: mov     ecx, [esp+20h+arg_0]
0x7C616D: push    ecx
0x7C616E: mov     ecx, edi
0x7C6170: call    sub_7C5750
0x7C6175: test    al, al
0x7C6177: jnz     short loc_7C618D
0x7C6179: mov     ecx, [esp+20h+var_C]
0x7C617D: mov     large fs:0, ecx
0x7C6184: pop     ecx
0x7C6185: pop     edi
0x7C6186: pop     esi
0x7C6187: pop     ebp
0x7C6188: pop     ebx
0x7C6189: add     esp, 0Ch
0x7C618C: retn
0x7C618D: mov     ebp, [edi+0E8h]
0x7C6193: test    ebp, ebp
0x7C6195: jz      short loc_7C620B
0x7C6197: mov     esi, [ebp+8]
0x7C619A: test    esi, esi
0x7C619C: lea     eax, [ebp+8]
0x7C619F: mov     ebp, [ebp+0]
0x7C61A2: jz      short loc_7C6207
0x7C61A4: lea     edx, [esp+20h+arg_4]
0x7C61A8: push    edx
0x7C61A9: mov     ecx, esi
0x7C61AB: call    sub_405AD0
0x7C61B0: mov     eax, [eax]
0x7C61B2: push    eax
0x7C61B3: mov     eax, [esp+24h+arg_0]
0x7C61B7: push    eax
0x7C61B8: mov     ecx, esi
0x7C61BA: mov     [esp+28h+var_4], 0
0x7C61C2: call    sub_7D2EA0
0x7C61C7: mov     bl, al
0x7C61C9: mov     eax, [esp+20h+arg_4]
0x7C61CD: test    eax, eax
0x7C61CF: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7C61D7: jz      short loc_7C61F7
0x7C61D9: mov     edi, eax
0x7C61DB: add     eax, 4
0x7C61DE: push    eax; lpAddend
0x7C61DF: call    dword ptr ds:0A2807Ch
0x7C61E5: test    eax, eax
0x7C61E7: jnz     short loc_7C61F7
0x7C61E9: test    edi, edi
0x7C61EB: jz      short loc_7C61F7
0x7C61ED: mov     edx, [edi]
0x7C61EF: mov     eax, [edx]
0x7C61F1: push    1
0x7C61F3: mov     ecx, edi
0x7C61F5: call    eax
0x7C61F7: test    bl, bl
0x7C61F9: jz      short loc_7C6207
0x7C61FB: mov     ecx, [esp+20h+arg_0]
0x7C61FF: push    ecx
0x7C6200: mov     ecx, esi
0x7C6202: call    sub_7D5790
0x7C6207: test    ebp, ebp
0x7C6209: jnz     short loc_7C6197
0x7C620B: mov     al, 1
0x7C620D: mov     ecx, [esp+20h+var_C]
0x7C6211: mov     large fs:0, ecx
0x7C6218: pop     ecx
0x7C6219: pop     edi
0x7C621A: pop     esi
0x7C621B: pop     ebp
0x7C621C: pop     ebx
0x7C621D: add     esp, 0Ch
0x7C6220: retn
