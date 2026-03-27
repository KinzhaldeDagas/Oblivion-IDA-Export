0x58CE30: push    0FFFFFFFFh
0x58CE32: push    offset SEH_8C8970
0x58CE37: mov     eax, large fs:0
0x58CE3D: push    eax
0x58CE3E: push    ecx
0x58CE3F: push    esi
0x58CE40: push    edi
0x58CE41: mov     eax, ds:0B30AACh
0x58CE46: xor     eax, esp
0x58CE48: push    eax
0x58CE49: lea     eax, [esp+1Ch+var_C]
0x58CE4D: mov     large fs:0, eax
0x58CE53: mov     edi, ecx
0x58CE55: push    1Ch; Size
0x58CE57: call    FormHeapAlloc
0x58CE5C: add     esp, 4
0x58CE5F: mov     [esp+1Ch+var_10], eax
0x58CE63: xor     esi, esi
0x58CE65: cmp     eax, esi
0x58CE67: mov     [esp+1Ch+var_4], esi
0x58CE6B: jz      short loc_58CE7C
0x58CE6D: mov     ecx, [esp+1Ch+arg_0]
0x58CE71: push    edi
0x58CE72: push    ecx
0x58CE73: mov     ecx, eax
0x58CE75: call    TileTemplateItem_constr
0x58CE7A: mov     esi, eax
0x58CE7C: push    esi
0x58CE7D: lea     ecx, [edi+4]
0x58CE80: mov     [esp+20h+var_4], 0FFFFFFFFh
0x58CE88: call    BSSimpleList_PushBack
0x58CE8D: mov     eax, esi
0x58CE8F: mov     ecx, [esp+1Ch+var_C]
0x58CE93: mov     large fs:0, ecx
0x58CE9A: pop     ecx
0x58CE9B: pop     edi
0x58CE9C: pop     esi
0x58CE9D: add     esp, 10h
0x58CEA0: retn    4
