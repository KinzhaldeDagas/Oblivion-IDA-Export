0x60E8A0: push    ebx
0x60E8A1: push    esi
0x60E8A2: mov     esi, ecx
0x60E8A4: push    edi
0x60E8A5: lea     ecx, [esi+44h]; this
0x60E8A8: xor     ebx, ebx
0x60E8AA: call    ExtraDataList_GetContainerChanges
0x60E8AF: mov     edi, eax
0x60E8B1: test    edi, edi
0x60E8B3: jz      short loc_60E8CA
0x60E8B5: push    ebx
0x60E8B6: push    ebx; a2
0x60E8B7: mov     ecx, esi; this
0x60E8B9: call    Actor_GetActorBaseForm
0x60E8BE: push    eax
0x60E8BF: mov     ecx, edi
0x60E8C1: call    sub_48B9C0
0x60E8C6: pop     edi
0x60E8C7: pop     esi
0x60E8C8: pop     ebx
0x60E8C9: retn
0x60E8CA: pop     edi
0x60E8CB: pop     esi
0x60E8CC: mov     eax, ebx
0x60E8CE: pop     ebx
0x60E8CF: retn
