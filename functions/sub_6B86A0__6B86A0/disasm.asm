0x6B86A0: push    esi
0x6B86A1: push    edi
0x6B86A2: mov     edi, ecx
0x6B86A4: mov     ecx, ds:0B33B00h
0x6B86AA: xor     esi, esi
0x6B86AC: call    sub_45A170
0x6B86B1: test    al, al
0x6B86B3: jz      short loc_6B86BA
0x6B86B5: mov     esi, 6
0x6B86BA: mov     eax, [edi]
0x6B86BC: lea     edx, [eax+1]
0x6B86BF: nop
0x6B86C0: mov     cl, [eax]
0x6B86C2: add     eax, 1
0x6B86C5: test    cl, cl
0x6B86C7: jnz     short loc_6B86C0
0x6B86C9: sub     eax, edx
0x6B86CB: cmp     ds:0B05BACh, cl
0x6B86D1: lea     esi, [esi+eax+10h]
0x6B86D5: jz      short loc_6B8741
0x6B86D7: mov     eax, ds:0B33B00h
0x6B86DC: mov     edi, [eax+84h]
0x6B86E2: test    edi, edi
0x6B86E4: jz      short loc_6B8726
0x6B86E6: mov     ecx, [edi]
0x6B86E8: push    ecx; a1
0x6B86E9: call    TESForm_LookupByFormID
0x6B86EE: mov     edx, [edi+5]
0x6B86F1: add     esp, 4
0x6B86F4: push    offset a_DialogueMenut; ".\\Dialogue\\MenuTopic.cpp"
0x6B86F9: push    209h
0x6B86FE: push    edx
0x6B86FF: mov     edx, [eax]
0x6B8701: mov     ecx, eax
0x6B8703: mov     eax, [edx+0D4h]
0x6B8709: call    eax
0x6B870B: mov     ecx, [edi]
0x6B870D: push    eax
0x6B870E: movzx   edx, si
0x6B8711: push    ecx
0x6B8712: push    edx; ArgList
0x6B8713: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x6B8718: call    sub_40FEC0
0x6B871D: add     esp, 1Ch
0x6B8720: pop     edi
0x6B8721: mov     ax, si
0x6B8724: pop     esi
0x6B8725: retn
0x6B8726: push    offset a_DialogueMenut; ".\\Dialogue\\MenuTopic.cpp"
0x6B872B: movzx   eax, si
0x6B872E: push    209h
0x6B8733: push    eax; ArgList
0x6B8734: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x6B8739: call    sub_40FEC0
0x6B873E: add     esp, 10h
0x6B8741: pop     edi
0x6B8742: mov     ax, si
0x6B8745: pop     esi
0x6B8746: retn
