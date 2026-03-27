0x68DE2B: cmp     byte ptr ds:0B05BACh, 0
0x68DE32: jz      short ActiveEffect_Base_GetAEListSaveSize?___Done
0x68DE34: mov     ecx, ds:0B33B00h
0x68DE3A: mov     esi, [ecx+84h]
0x68DE40: test    esi, esi
0x68DE42: jz      short loc_68DE87
0x68DE44: mov     edx, [esi]
0x68DE46: push    edx; a1
0x68DE47: call    TESForm_LookupByFormID
0x68DE4C: mov     ecx, [esi+5]
0x68DE4F: mov     edx, [eax]
0x68DE51: add     esp, 4
0x68DE54: push    offset a_MagicActiveef; ".\\Magic\\ActiveEffect.cpp"
0x68DE59: push    353h
0x68DE5E: push    ecx
0x68DE5F: mov     ecx, eax
0x68DE61: mov     eax, [edx+0D4h]
0x68DE67: call    eax
0x68DE69: mov     ecx, [esi]
0x68DE6B: push    eax
0x68DE6C: movzx   edx, bp
0x68DE6F: push    ecx
0x68DE70: push    edx; ArgList
0x68DE71: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x68DE76: call    sub_40FEC0
0x68DE7B: add     esp, 1Ch
0x68DE7E: pop     edi
0x68DE7F: pop     esi
0x68DE80: mov     ax, bp
0x68DE83: pop     ebp
0x68DE84: pop     ebx
0x68DE85: pop     ecx
0x68DE86: retn
0x68DE87: push    offset a_MagicActiveef; ".\\Magic\\ActiveEffect.cpp"
0x68DE8C: movzx   eax, bp
0x68DE8F: push    353h
0x68DE94: push    eax; ArgList
0x68DE95: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x68DE9A: call    sub_40FEC0
0x68DE9F: add     esp, 10h
