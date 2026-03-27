0x699C70: push    esi
0x699C71: mov     esi, ecx
0x699C73: mov     eax, [esi]
0x699C75: mov     edx, [eax+20h]
0x699C78: push    edi
0x699C79: call    edx
0x699C7B: test    eax, eax
0x699C7D: jz      short MagicCaster_GetFormID___BadParentForm
0x699C7F: mov     edx, [eax]
0x699C81: mov     ecx, eax
0x699C83: mov     eax, [edx+190h]
0x699C89: call    eax
0x699C8B: test    al, al
0x699C8D: jz      short MagicCaster_GetFormID___BadParentForm
