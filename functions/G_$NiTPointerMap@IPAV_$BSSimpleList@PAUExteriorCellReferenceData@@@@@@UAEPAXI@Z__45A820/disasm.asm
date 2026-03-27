0x45A820: push    esi
0x45A821: mov     esi, ecx
0x45A823: call    ??1?$NiTPointerMap@IPAV?$BSSimpleList@PAUExteriorCellReferenceData@@@@@@UAE@XZ; NiTPointerMap<uint,BSSimpleList<ExteriorCellReferenceData *> *>::~NiTPointerMap<uint,BSSimpleList<ExteriorCellReferenceData *> *>(void)
0x45A828: test    [esp+4+arg_0], 1
0x45A82D: jz      short loc_45A838
0x45A82F: push    esi
0x45A830: call    FormHeapFree
0x45A835: add     esp, 4
0x45A838: mov     eax, esi
0x45A83A: pop     esi
0x45A83B: retn    4
