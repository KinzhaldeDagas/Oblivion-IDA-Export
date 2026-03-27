0x75B1C0: push    ebx
0x75B1C1: push    esi
0x75B1C2: mov     esi, [esp+8+arg_0]
0x75B1C6: push    edi
0x75B1C7: push    esi
0x75B1C8: mov     ebx, ecx
0x75B1CA: call    sub_752EC0
0x75B1CF: mov     eax, ds:0B419ACh
0x75B1D4: push    eax; ArgList
0x75B1D5: call    TESOutput_PrintString
0x75B1DA: movzx   edi, word ptr [esi+0Ah]
0x75B1DE: movzx   ecx, word ptr [esi+8]
0x75B1E2: add     esp, 4
0x75B1E5: cmp     edi, ecx
0x75B1E7: mov     [esp+0Ch+arg_0], eax
0x75B1EB: jb      short loc_75B1FB
0x75B1ED: movzx   edx, word ptr [esi+0Eh]
0x75B1F1: add     edx, edi
0x75B1F3: push    edx
0x75B1F4: mov     ecx, esi
0x75B1F6: call    NiTArray_SetSize
0x75B1FB: lea     eax, [esp+0Ch+arg_0]
0x75B1FF: push    eax
0x75B200: push    edi
0x75B201: mov     ecx, esi
0x75B203: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75B208: movzx   ecx, word ptr [ebx+18h]
0x75B20C: push    ecx; __int16
0x75B20D: push    offset aUpdateSkip; "Update Skip"
0x75B212: call    TESOutput_PrintLabeledSignedShort
0x75B217: movzx   edi, word ptr [esi+0Ah]
0x75B21B: movzx   edx, word ptr [esi+8]
0x75B21F: add     esp, 8
0x75B222: cmp     edi, edx
0x75B224: mov     [esp+0Ch+arg_0], eax
0x75B228: jb      short loc_75B238
0x75B22A: movzx   eax, word ptr [esi+0Eh]
0x75B22E: add     eax, edi
0x75B230: push    eax
0x75B231: mov     ecx, esi
0x75B233: call    NiTArray_SetSize
0x75B238: lea     ecx, [esp+0Ch+arg_0]
0x75B23C: push    ecx
0x75B23D: push    edi
0x75B23E: mov     ecx, esi
0x75B240: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75B245: pop     edi
0x75B246: pop     esi
0x75B247: pop     ebx
0x75B248: retn    4
