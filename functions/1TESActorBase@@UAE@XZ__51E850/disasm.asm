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
0x51E87C: lea     ecx, [esi+0D0h]; self
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
0x51E8BB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
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
0x9B7860: mov     ecx, [ebp-10h]
0x9B7863: jmp     TESObject_destr
0x9B7868: cmp     dword ptr [ebp-10h], 0
0x9B786C: jz      loc_9B7880
0x9B7872: mov     eax, [ebp-10h]
0x9B7875: add     eax, 24h ; '$'
0x9B7878: mov     [ebp-14h], eax
0x9B787B: jmp     loc_9B7887
0x9B7880: mov     dword ptr [ebp-14h], 0
0x9B7887: mov     ecx, [ebp-14h]
0x9B788A: jmp     TESActorBaseData_destr
0x9B788F: cmp     dword ptr [ebp-10h], 0
0x9B7893: jz      loc_9B78A7
0x9B7899: mov     eax, [ebp-10h]
0x9B789C: add     eax, 44h ; 'D'
0x9B789F: mov     [ebp-18h], eax
0x9B78A2: jmp     loc_9B78AE
0x9B78A7: mov     dword ptr [ebp-18h], 0
0x9B78AE: mov     ecx, [ebp-18h]
0x9B78B1: jmp     TESContainer_destr
0x9B78B6: cmp     dword ptr [ebp-10h], 0
0x9B78BA: jz      loc_9B78CE
0x9B78C0: mov     eax, [ebp-10h]
0x9B78C3: add     eax, 54h ; 'T'
0x9B78C6: mov     [ebp-1Ch], eax
0x9B78C9: jmp     loc_9B78D5
0x9B78CE: mov     dword ptr [ebp-1Ch], 0
0x9B78D5: mov     ecx, [ebp-1Ch]
0x9B78D8: jmp     TESSpellList_destr?
0x9B78DD: cmp     dword ptr [ebp-10h], 0
0x9B78E1: jz      loc_9B78F5
0x9B78E7: mov     eax, [ebp-10h]
0x9B78EA: add     eax, 68h ; 'h'
0x9B78ED: mov     [ebp-20h], eax
0x9B78F0: jmp     loc_9B78FC
0x9B78F5: mov     dword ptr [ebp-20h], 0
0x9B78FC: mov     ecx, [ebp-20h]
0x9B78FF: jmp     TESAIForm_destr
0x9B7904: cmp     dword ptr [ebp-10h], 0
0x9B7908: jz      loc_9B791E
0x9B790E: mov     eax, [ebp-10h]
0x9B7911: add     eax, 80h ; '€'
0x9B7916: mov     [ebp-24h], eax
0x9B7919: jmp     loc_9B7925
0x9B791E: mov     dword ptr [ebp-24h], 0
0x9B7925: mov     ecx, [ebp-24h]
0x9B7928: jmp     TESHealthForm_destr
0x9B792D: cmp     dword ptr [ebp-10h], 0
0x9B7931: jz      loc_9B7947
0x9B7937: mov     eax, [ebp-10h]
0x9B793A: add     eax, 88h ; 'ˆ'
0x9B793F: mov     [ebp-28h], eax
0x9B7942: jmp     loc_9B794E
0x9B7947: mov     dword ptr [ebp-28h], 0
0x9B794E: mov     ecx, [ebp-28h]
0x9B7951: jmp     TESAttributes_destr
0x9B7956: cmp     dword ptr [ebp-10h], 0
0x9B795A: jz      loc_9B7970
0x9B7960: mov     eax, [ebp-10h]
0x9B7963: add     eax, 0A0h ; ' '
0x9B7968: mov     [ebp-2Ch], eax
0x9B796B: jmp     loc_9B7977
0x9B7970: mov     dword ptr [ebp-2Ch], 0
0x9B7977: mov     ecx, [ebp-2Ch]
0x9B797A: jmp     TESFullName_Initialize
0x9B797F: cmp     dword ptr [ebp-10h], 0
0x9B7983: jz      loc_9B7999
0x9B7989: mov     eax, [ebp-10h]
0x9B798C: add     eax, 0ACh ; '¬'
0x9B7991: mov     [ebp-30h], eax
0x9B7994: jmp     loc_9B79A0
0x9B7999: mov     dword ptr [ebp-30h], 0
0x9B79A0: mov     ecx, [ebp-30h]; this
0x9B79A3: jmp     ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x9B79A8: mov     edx, [esp+arg_4]
0x9B79AC: lea     eax, [edx-30h]
0x9B79AF: mov     ecx, [edx-34h]
0x9B79B2: xor     ecx, eax
0x9B79B4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B79B9: mov     eax, offset stru_AE22E4
0x9B79BE: jmp     ___CxxFrameHandler3
