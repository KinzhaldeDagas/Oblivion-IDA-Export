0x728AB0: push    edi; Returns false immediately for an already-locked stream. Otherwise records bool argument at +0x3D and sets locked byte +0x3C. Additional-data branch: true argument invokes sub_7261D0 at acquisition; false invokes sub_726190 and later sub_7261D0 on unlock. Do not infer operation semantics from old writeAccess label alone.
0x728AB1: mov     edi, ecx
0x728AB3: cmp     byte ptr [edi+3Ch], 0
0x728AB7: jz      short loc_728ABF
0x728AB9: xor     al, al
0x728ABB: pop     edi
0x728ABC: retn    4
0x728ABF: push    ebx
0x728AC0: mov     bl, [esp+8+writeAccess]
0x728AC4: push    esi
0x728AC5: mov     esi, [edi+34h]
0x728AC8: test    esi, esi
0x728ACA: jz      short loc_728B08
0x728ACC: mov     eax, [esi]
0x728ACE: mov     edx, [eax+4Ch]
0x728AD1: mov     ecx, esi
0x728AD3: call    edx
0x728AD5: test    al, al
0x728AD7: jz      short loc_728B08
0x728AD9: test    bl, bl
0x728ADB: mov     ecx, esi
0x728ADD: jz      short loc_728AF4
0x728ADF: push    0
0x728AE1: call    sub_7261D0
0x728AE6: pop     esi
0x728AE7: mov     [edi+3Dh], bl
0x728AEA: mov     al, 1
0x728AEC: pop     ebx
0x728AED: mov     [edi+3Ch], al
0x728AF0: pop     edi
0x728AF1: retn    4
0x728AF4: lea     eax, [esp+0Ch+writeAccess]
0x728AF8: push    eax
0x728AF9: push    0
0x728AFB: mov     dword ptr [esp+14h+writeAccess], 0
0x728B03: call    sub_726190
0x728B08: pop     esi
0x728B09: mov     [edi+3Dh], bl
0x728B0C: mov     al, 1
0x728B0E: pop     ebx
0x728B0F: mov     [edi+3Ch], al
0x728B12: pop     edi
0x728B13: retn    4
