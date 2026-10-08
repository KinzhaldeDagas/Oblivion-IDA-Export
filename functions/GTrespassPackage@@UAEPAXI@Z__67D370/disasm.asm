0x67D370: push    esi
0x67D371: mov     esi, ecx
0x67D373: mov     dword ptr [esi], offset ??_7TrespassPackage@@6B@; Verified complete TESPackage persistence table extentEC; tail DC/E0/E4/E8 is no-argument size/save/load/init-load virtuals. Derived vtable identity from constructor stores and RTTI names. Prior incompleteDC type corrected.
0x67D379: call    ??1TESPackage@@UAE@XZ; TESPackage::~TESPackage(void)
0x67D37E: test    byte ptr [esp+4+arg_0], 1
0x67D383: jz      short loc_67D38E
0x67D385: push    esi
0x67D386: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x67D38B: add     esp, 4
0x67D38E: mov     eax, esi
0x67D390: pop     esi
0x67D391: retn    4
