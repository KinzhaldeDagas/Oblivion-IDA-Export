0x709EC0: mov     eax, [ecx]
0x709EC2: mov     edx, [eax+78h]
0x709EC5: push    esi
0x709EC6: mov     esi, [ecx+1Ch]
0x709EC9: call    edx
0x709ECB: test    esi, esi
0x709ECD: jz      short loc_709EDC
0x709ECF: mov     eax, [esi]
0x709ED1: mov     edx, [eax+94h]
0x709ED7: mov     ecx, esi
0x709ED9: pop     esi
0x709EDA: jmp     edx
0x709EDC: pop     esi
0x709EDD: retn
