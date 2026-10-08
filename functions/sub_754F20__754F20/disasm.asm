0x754F20: push    esi
0x754F21: push    edi
0x754F22: push    40h ; '@'; Size
0x754F24: mov     edi, ecx
0x754F26: call    FormHeapAlloc
0x754F2B: mov     esi, eax
0x754F2D: add     esp, 4
0x754F30: test    esi, esi
0x754F32: jz      short loc_754F60
0x754F34: mov     ecx, esi; this
0x754F36: call    ??0NiTimeController@@QAE@XZ; Constructs a 0x3C-byte NiTimeController. Persistent authored state: flags +0x08, frequency +0x0C, phase +0x10, low/high key times +0x14/+0x18, target +0x30, next controller +0x34. Initializes runtime start/last/cache values +0x1C..+0x28 to sentinels, update byte +0x2C to 1, and force byte +0x38 to 0.
0x754F3B: mov     eax, [esp+8+arg_0]
0x754F3F: mov     dword ptr [esi], offset ??_7NiPSysResetOnLoopCtlr@@6B@; const NiPSysResetOnLoopCtlr::`vftable'
0x754F45: fld     dword ptr ds:0A7DEB4h
0x754F4B: push    eax
0x754F4C: fchs
0x754F4E: push    esi
0x754F4F: fstp    dword ptr [esi+3Ch]
0x754F52: mov     ecx, edi
0x754F54: call    NiTimeController_CopyMembers; Copies flags and timing values through +0x24. Remaps target +0x30 through the clone map only when runtime types match, and clones the refcounted next-controller chain at +0x34. Runtime cache +0x28 and update/force bytes are not copied here.
0x754F59: pop     edi
0x754F5A: mov     eax, esi
0x754F5C: pop     esi
0x754F5D: retn    4
0x754F60: mov     eax, [esp+8+arg_0]
0x754F64: push    eax
0x754F65: xor     esi, esi
0x754F67: push    esi
0x754F68: mov     ecx, edi
0x754F6A: call    NiTimeController_CopyMembers; Copies flags and timing values through +0x24. Remaps target +0x30 through the clone map only when runtime types match, and clones the refcounted next-controller chain at +0x34. Runtime cache +0x28 and update/force bytes are not copied here.
0x754F6F: pop     edi
0x754F70: mov     eax, esi
0x754F72: pop     esi
0x754F73: retn    4
