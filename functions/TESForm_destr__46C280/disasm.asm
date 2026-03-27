0x46C280: push    esi
0x46C281: mov     esi, ecx
0x46C283: mov     dword ptr [esi], offset ??_7TESForm@@6B@; const TESForm::`vftable'
0x46C289: call    TESForm_RemoveFromGlobalLists
0x46C28E: cmp     dword ptr [esi+14h], 0
0x46C292: jz      short loc_46C2AC
0x46C294: push    edi
0x46C295: mov     eax, [esi+14h]
0x46C298: mov     edi, [eax+4]
0x46C29B: push    eax
0x46C29C: call    FormHeapFree
0x46C2A1: add     esp, 4
0x46C2A4: test    edi, edi
0x46C2A6: mov     [esi+14h], edi
0x46C2A9: jnz     short loc_46C295
0x46C2AB: pop     edi
0x46C2AC: mov     dword ptr [esi+10h], 0
0x46C2B3: mov     eax, [esi+8]
0x46C2B6: shr     eax, 0Eh
0x46C2B9: test    al, 1
0x46C2BB: jnz     short loc_46C2DB
0x46C2BD: mov     ecx, ds:0B33B00h; this
0x46C2C3: test    ecx, ecx
0x46C2C5: jz      short loc_46C2DB
0x46C2C7: push    0; a3
0x46C2C9: push    esi; a2
0x46C2CA: call    sub_45B780
0x46C2CF: mov     ecx, ds:0B33B00h
0x46C2D5: push    esi
0x46C2D6: call    TESForm_RemoveFromList
0x46C2DB: pop     esi
0x46C2DC: retn
