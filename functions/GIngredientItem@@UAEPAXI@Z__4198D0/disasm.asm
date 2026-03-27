0x4198D0: push    esi
0x4198D1: mov     esi, ecx
0x4198D3: call    ??1IngredientItem@@UAE@XZ; IngredientItem::~IngredientItem(void)
0x4198D8: test    byte ptr [esp+4+arg_0], 1
0x4198DD: jz      short loc_4198E8
0x4198DF: push    esi
0x4198E0: call    FormHeapFree
0x4198E5: add     esp, 4
0x4198E8: mov     eax, esi
0x4198EA: pop     esi
0x4198EB: retn    4
