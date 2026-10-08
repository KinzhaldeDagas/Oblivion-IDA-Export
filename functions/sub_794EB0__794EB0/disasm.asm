0x794EB0: push    esi; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x794EB1: mov     esi, ecx
0x794EB3: mov     eax, [esi+4]
0x794EB6: test    eax, eax
0x794EB8: jz      short loc_794EC3
0x794EBA: push    eax
0x794EBB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x794EC0: add     esp, 4
0x794EC3: mov     dword ptr [esi+4], 0
0x794ECA: mov     dword ptr [esi+8], 0
0x794ED1: mov     dword ptr [esi+0Ch], 0
0x794ED8: pop     esi
0x794ED9: retn
