0x7018F0: push    ebp
0x7018F1: mov     ebp, [esp+4+arg_0]
0x7018F5: mov     eax, [ebp+0ACh]
0x7018FB: push    esi
0x7018FC: mov     esi, ecx
0x7018FE: lea     ecx, [esp+8+arg_0]
0x701902: push    ecx
0x701903: mov     ecx, ebp
0x701905: mov     [esi+0Ch], eax
0x701908: call    sub_7016D0
0x70190D: mov     edx, [eax]
0x70190F: mov     eax, [esp+8+arg_0]
0x701913: test    eax, eax
0x701915: mov     [esi+10h], edx
0x701918: jz      short loc_70193A
0x70191A: push    edi
0x70191B: mov     edi, eax
0x70191D: add     eax, 4
0x701920: push    eax; lpAddend
0x701921: call    dword ptr ds:0A2807Ch
0x701927: test    eax, eax
0x701929: jnz     short loc_701939
0x70192B: test    edi, edi
0x70192D: jz      short loc_701939
0x70192F: mov     eax, [edi]
0x701931: mov     edx, [eax]
0x701933: push    1
0x701935: mov     ecx, edi
0x701937: call    edx
0x701939: pop     edi
0x70193A: cmp     dword ptr [esi+200h], 1
0x701941: jz      short loc_70194C
0x701943: cmp     dword ptr [esi+204h], 1
0x70194A: jnz     short loc_701962
0x70194C: cmp     byte ptr [esi+20Ch], 1
0x701953: jnz     short loc_701962
0x701955: mov     eax, [esi]
0x701957: mov     edx, [eax+164h]
0x70195D: push    ebp
0x70195E: mov     ecx, esi
0x701960: call    edx
0x701962: pop     esi
0x701963: pop     ebp
0x701964: retn    4
