0x78D9E0: push    ebp; CSpeedTreeRT hidden instance initializer. Shallow-copies shared heavy pointers from source tree, increments shared refcount/list state, allocates per-instance STreeInstanceData, and records source-tree pointer in instance data.
0x78D9E1: mov     ebp, esp
0x78D9E3: push    0FFFFFFFFh
0x78D9E5: push    offset SEH_78D9E0
0x78D9EA: mov     eax, large fs:0
0x78D9F0: push    eax
0x78D9F1: sub     esp, 48h
0x78D9F4: push    ebx
0x78D9F5: push    esi
0x78D9F6: push    edi
0x78D9F7: mov     eax, ds:0B30AACh
0x78D9FC: xor     eax, ebp
0x78D9FE: push    eax
0x78D9FF: lea     eax, [ebp+var_C]
0x78DA02: mov     large fs:0, eax
0x78DA08: mov     [ebp+var_10], esp
0x78DA0B: mov     ebx, ecx
0x78DA0D: mov     [ebp+var_14], ebx
0x78DA10: mov     esi, [ebp+source]
0x78DA13: mov     eax, [esi]
0x78DA15: mov     [ebx], eax
0x78DA17: mov     ecx, [esi+4]
0x78DA1A: mov     [ebx+4], ecx
0x78DA1D: mov     edx, [esi+8]
0x78DA20: mov     [ebx+8], edx
0x78DA23: mov     eax, [esi+0Ch]
0x78DA26: mov     [ebx+0Ch], eax
0x78DA29: mov     ecx, [esi+10h]
0x78DA2C: mov     [ebx+10h], ecx
0x78DA2F: mov     edx, [esi+14h]
0x78DA32: mov     [ebx+14h], edx
0x78DA35: mov     eax, [esi+18h]
0x78DA38: mov     [ebx+18h], eax
0x78DA3B: fld     dword ptr [esi+1Ch]
0x78DA3E: fstp    dword ptr [ebx+1Ch]
0x78DA41: mov     [ebp+var_4], 0
0x78DA48: fld     dword ptr [esi+20h]
0x78DA4B: mov     [ebp+value], ebx
0x78DA4E: fstp    dword ptr [ebx+20h]
0x78DA51: fld     dword ptr [esi+24h]
0x78DA54: fstp    dword ptr [ebx+24h]
0x78DA57: fld     dword ptr [esi+28h]
0x78DA5A: fstp    dword ptr [ebx+28h]
0x78DA5D: mov     ecx, [esi+2Ch]
0x78DA60: mov     [ebx+2Ch], ecx
0x78DA63: mov     edx, [esi+30h]
0x78DA66: mov     [ebx+30h], edx; InstanceInit copies source CSpeedTreeRT+0x30 unchanged into instance +0x30. Thus every base/instance in one shared family exposes the same stable refcount-allocation identity; lookup by this pointer can recover sidecars for an otherwise unlinked instance while the family is live. Guard post-final reuse with publication generation.
0x78DA69: mov     eax, [esi+38h]
0x78DA6C: mov     [ebx+38h], eax
0x78DA6F: mov     ecx, [esi+3Ch]
0x78DA72: mov     [ebx+3Ch], ecx
0x78DA75: mov     edx, [esi+40h]
0x78DA78: mov     [ebx+40h], edx
0x78DA7B: movzx   eax, byte ptr [esi+44h]
0x78DA7F: mov     [ebx+44h], al
0x78DA82: mov     cl, [esi+45h]
0x78DA85: mov     [ebx+45h], cl
0x78DA88: mov     edx, [esi+48h]
0x78DA8B: mov     [ebx+48h], edx
0x78DA8E: mov     eax, [esi+4Ch]
0x78DA91: mov     [ebx+4Ch], eax
0x78DA94: mov     ecx, [esi+50h]
0x78DA97: mov     [ebx+50h], ecx
0x78DA9A: mov     dx, [esi+54h]; 2026-05-21 360 gap pass: instance init reads source CSpeedTreeRT+0x54 directional image count for shallow copy.
0x78DA9E: mov     [ebx+54h], dx; 2026-05-21 360 gap pass: instance init copies source CSpeedTreeRT+0x54 into instance; this propagates a count only if a base path initialized it first.
0x78DAA2: mov     eax, [esi+58h]
0x78DAA5: mov     [ebx+58h], eax
0x78DAA8: mov     ecx, [esi+5Ch]
0x78DAAB: mov     [ebx+5Ch], ecx
0x78DAAE: mov     edx, [esi+60h]
0x78DAB1: mov     [ebx+60h], edx
0x78DAB4: mov     ax, [esi+64h]
0x78DAB8: mov     [ebx+64h], ax
0x78DABC: mov     ecx, [esi+68h]
0x78DABF: mov     [ebx+68h], ecx
0x78DAC2: mov     dl, [esi+6Ch]
0x78DAC5: mov     [ebx+6Ch], dl
0x78DAC8: movzx   eax, byte ptr [esi+6Dh]
0x78DACC: lea     ecx, [ebp+value]
0x78DACF: push    ecx; value
0x78DAD0: mov     ecx, [ebx+38h]; this
0x78DAD3: mov     [ebx+6Dh], al
0x78DAD6: call    OB_stVector4_PushBack_010201A0; Pushes one 4-byte value into an OB_stVector4. Writes directly at end when capacity remains, otherwise calls the checked insert-one helper. Oblivion uses it for CBranch pointers and other pointer-sized SpeedTree lists.
0x78DADB: mov     eax, [ebx+30h]
0x78DADE: add     esi, 70h ; 'p'
0x78DAE1: lea     edi, [ebx+70h]
0x78DAE4: mov     ecx, 0Ch
0x78DAE9: rep movsd
0x78DAEB: add     dword ptr [eax], 1; MakeInstance increments the shared count at CSpeedTreeRT+0x30 before returning the new object. The increment is a plain ++, not Interlocked; stock therefore assumes serialized lifecycle access for one shared tree.
0x78DAEE: push    14h; Size
0x78DAF0: call    FormHeapAlloc
0x78DAF5: add     esp, 4
0x78DAF8: test    eax, eax
0x78DAFA: jz      short loc_78DB14
0x78DAFC: fldz
0x78DAFE: mov     dword ptr [eax], 0
0x78DB04: fst     dword ptr [eax+0Ch]
0x78DB07: fst     dword ptr [eax+8]
0x78DB0A: fstp    dword ptr [eax+4]
0x78DB0D: fld1
0x78DB0F: fstp    dword ptr [eax+10h]
0x78DB12: jmp     short loc_78DB16
0x78DB14: xor     eax, eax
0x78DB16: mov     edx, [ebp+source]
0x78DB19: mov     [ebx+34h], eax
0x78DB1C: mov     [eax], edx; Stores the immediate source CSpeedTreeRT pointer in per-instance data +0x00. Oblivion's sole BSTreeModel caller rejects source model state 2, so this game path records the base CSpeedTreeRT directly.
0x78DB1E: mov     eax, [edx]
0x78DB20: mov     ecx, [ebx+34h]
0x78DB23: mov     esi, [eax+4]
0x78DB26: add     eax, 4
0x78DB29: add     ecx, 4
0x78DB2C: mov     [ecx], esi
0x78DB2E: mov     esi, [eax+4]
0x78DB31: mov     [ecx+4], esi
0x78DB34: mov     eax, [eax+8]
0x78DB37: mov     [ecx+8], eax
0x78DB3A: mov     eax, [edx+34h]
0x78DB3D: test    eax, eax
0x78DB3F: jz      short loc_78DB46
0x78DB41: fld     dword ptr [eax+10h]
0x78DB44: jmp     short loc_78DB4B
0x78DB46: mov     ecx, [edx]
0x78DB48: fld     dword ptr [ecx+14h]
0x78DB4B: mov     edx, [ebx+34h]
0x78DB4E: fstp    [ebp+source]
0x78DB51: fld     [ebp+source]
0x78DB54: fstp    dword ptr [edx+10h]
0x78DB57: add     dword ptr ds:0B42980h, 1
0x78DB5E: jmp     loc_78DBED
0x78DB63: mov     ecx, [ebp+var_1C]
0x78DB66: mov     eax, [ecx]
0x78DB68: mov     edx, [eax+4]
0x78DB6B: call    edx
0x78DB6D: push    eax
0x78DB6E: push    offset aCspeedtreer_18; "CSpeedTreeRT::CSpeedTreeRT(CSpeedTreeRT"...
0x78DB73: push    offset aSFailedS; "%s - failed [%s]"
0x78DB78: lea     esi, [ebp+result]; result
0x78DB7B: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78DB80: add     esp, 0Ch
0x78DB83: cmp     dword ptr [eax+18h], 10h
0x78DB87: mov     byte ptr [ebp+var_4], 2
0x78DB8B: jb      short loc_78DB92
0x78DB8D: mov     eax, [eax+4]
0x78DB90: jmp     short loc_78DB95
0x78DB92: add     eax, 4
0x78DB95: push    eax; error
0x78DB96: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78DB9B: add     esp, 4
0x78DB9E: lea     ecx, [ebp+result]; this
0x78DBA1: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78DBA6: mov     eax, offset loc_78DBEA
0x78DBAB: retn
0x78DBAC: push    offset aCspeedtreer_18; "CSpeedTreeRT::CSpeedTreeRT(CSpeedTreeRT"...
0x78DBB1: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78DBB6: lea     esi, [ebp+var_54]; result
0x78DBB9: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78DBBE: add     esp, 8
0x78DBC1: cmp     dword ptr [eax+18h], 10h
0x78DBC5: mov     byte ptr [ebp+var_4], 3
0x78DBC9: jb      short loc_78DBD0
0x78DBCB: mov     eax, [eax+4]
0x78DBCE: jmp     short loc_78DBD3
0x78DBD0: add     eax, 4
0x78DBD3: push    eax; error
0x78DBD4: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78DBD9: add     esp, 4
0x78DBDC: lea     ecx, [ebp+var_54]; this
0x78DBDF: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78DBE4: mov     eax, offset loc_78DBEA
0x78DBE9: retn
0x78DBEA: mov     ebx, [ebp+var_14]
0x78DBED: mov     eax, ebx
0x78DBEF: mov     ecx, [ebp+var_C]
0x78DBF2: mov     large fs:0, ecx
0x78DBF9: pop     ecx
0x78DBFA: pop     edi
0x78DBFB: pop     esi
0x78DBFC: pop     ebx
0x78DBFD: mov     esp, ebp
0x78DBFF: pop     ebp
0x78DC00: retn    4
0x9CBA00: lea     ecx, [ebp+result]; this
0x9CBA03: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CBA08: lea     ecx, [ebp+var_54]; this
0x9CBA0B: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CBA10: mov     edx, [esp-4+arg_4]
0x9CBA14: lea     eax, [edx+0Ch]
0x9CBA17: mov     ecx, [edx-58h]
0x9CBA1A: xor     ecx, eax
0x9CBA1C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CBA21: mov     eax, offset stru_AF47E8
0x9CBA26: jmp     ___CxxFrameHandler3
