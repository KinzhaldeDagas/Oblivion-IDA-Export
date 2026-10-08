0x60D020: mov     eax, [esp+count]; Identical-code-folded setter shared by unrelated engine classes: writes value to *(int *)(this+4) and returns value. In EntryData call sites, +0x04 is the canonical signed countDelta; shader/process vtable users give the same bytes unrelated meanings. Do not assign a globally EntryData-specific prototype.
0x60D024: mov     [ecx+4], eax
0x60D027: retn    4
