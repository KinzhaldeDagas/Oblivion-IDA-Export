0x51E850: push    0FFFFFFFFh
0x51E852: push    offset ??1TESActorBase@@UAE@XZ_SEH
0x51E857: mov     eax, large fs:0
0x51E85D: push    eax
0x51E85E: sub     esp, 24h
0x51E861: push    ebx
0x51E862: push    esi
0x51E863: push    edi
0x51E864: mov     eax, ds:0B30AACh
0x51E869: xor     eax, esp
0x51E86B: push    eax
0x51E86C: lea     eax, [esp+40h+var_C]
0x51E870: mov     large fs:0, eax
0x51E876: mov     esi, ecx
0x51E878: mov     [esp+40h+var_10], esi
0x51E87C: lea     ecx, [esi+0D0h]
0x51E882: mov     [esp+40h+var_4], 8
0x51E88A: call    AVCollection_destr
0x51E88F: xor     ebx, ebx
0x51E891: cmp     esi, ebx
0x51E893: mov     byte ptr [esp+40h+var_4], 7
0x51E898: jz      short loc_51E8A2
0x51E89A: lea     ecx, [esi+0ACh]
0x51E8A0: jmp     short loc_51E8A4
0x51E8A2: xor     ecx, ecx; this
0x51E8A4: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x51E8A9: cmp     esi, ebx
0x51E8AB: jz      short loc_51E8B5
0x51E8AD: lea     edi, [esi+0A0h]
0x51E8B3: jmp     short loc_51E8B7
0x51E8B5: xor     edi, edi
0x51E8B7: mov     eax, [edi+4]
0x51E8BA: push    eax
0x51E8BB: call    FormHeapFree
0x51E8C0: add     esp, 4
0x51E8C3: cmp     esi, ebx
0x51E8C5: mov     [edi+4], ebx
0x51E8C8: mov     [edi+0Ah], bx
0x51E8CC: mov     [edi+8], bx
0x51E8D0: mov     byte ptr [esp+40h+var_4], 5
0x51E8D5: jz      short loc_51E8DF
0x51E8D7: lea     ecx, [esi+88h]
0x51E8DD: jmp     short loc_51E8E1
0x51E8DF: xor     ecx, ecx
0x51E8E1: call    TESAttributes_destr
0x51E8E6: cmp     esi, ebx
0x51E8E8: mov     byte ptr [esp+40h+var_4], 4
0x51E8ED: jz      short loc_51E8F7
0x51E8EF: lea     ecx, [esi+80h]
0x51E8F5: jmp     short loc_51E8F9
0x51E8F7: xor     ecx, ecx
0x51E8F9: call    TESHealthForm_destr
0x51E8FE: cmp     esi, ebx
0x51E900: mov     byte ptr [esp+40h+var_4], 3
0x51E905: jz      short loc_51E90C
0x51E907: lea     ecx, [esi+68h]
0x51E90A: jmp     short loc_51E90E
0x51E90C: xor     ecx, ecx
0x51E90E: call    TESAIForm_destr
0x51E913: cmp     esi, ebx
0x51E915: mov     byte ptr [esp+40h+var_4], 2
0x51E91A: jz      short loc_51E921
0x51E91C: lea     ecx, [esi+54h]
0x51E91F: jmp     short loc_51E923
0x51E921: xor     ecx, ecx
0x51E923: call    TESSpellList_destr?
0x51E928: cmp     esi, ebx
0x51E92A: mov     byte ptr [esp+40h+var_4], 1
0x51E92F: jz      short loc_51E936
0x51E931: lea     ecx, [esi+44h]
0x51E934: jmp     short loc_51E938
0x51E936: xor     ecx, ecx
0x51E938: call    TESContainer_destr
0x51E93D: cmp     esi, ebx
0x51E93F: mov     byte ptr [esp+40h+var_4], bl
0x51E943: jz      short loc_51E94A
0x51E945: lea     ecx, [esi+24h]
0x51E948: jmp     short loc_51E94C
0x51E94A: xor     ecx, ecx
0x51E94C: call    TESActorBaseData_destr
0x51E951: mov     ecx, esi
0x51E953: mov     [esp+40h+var_4], 0FFFFFFFFh
0x51E95B: call    TESObject_destr
0x51E960: mov     ecx, [esp+40h+var_C]
0x51E964: mov     large fs:0, ecx
0x51E96B: pop     ecx
0x51E96C: pop     edi
0x51E96D: pop     esi
0x51E96E: pop     ebx
0x51E96F: add     esp, 30h
0x51E972: retn
