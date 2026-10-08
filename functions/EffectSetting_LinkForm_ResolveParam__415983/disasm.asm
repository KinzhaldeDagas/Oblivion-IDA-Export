0x415983: push    0FFFFFFFFh; a2
0x415985: call    TESForm_GetOverrideFile; TESForm override-file selector. With a2=-1 it walks the entire mod-reference list and returns the last non-null TESFile; TESTopicInfo lazy responses therefore read only the winning override file.
0x41598A: push    eax; a2
0x41598B: lea     ecx, [esi+60h]
0x41598E: push    ecx; a1
0x41598F: call    TESForm_ResolveFormID; Resolves a plugin-record FormID to current load order. During save loading it uses modRefIDTable; otherwise the serialized high byte selects a master, falling back to the current file, while preserving the low 24-bit object ID.
0x415994: add     esp, 8
