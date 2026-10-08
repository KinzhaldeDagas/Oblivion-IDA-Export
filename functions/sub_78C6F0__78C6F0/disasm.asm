0x78C6F0: push    ebp; SpeedTreeOBSE 2026-05-31 leaf-mesh family gap pass: GetGeometry leaf bit 0x04 reaches stock leaf-card export only; 4.1 mesh leaves would require CLeafGeometry SMesh output not present in Oblivion's fixed-card consumer.
0x78C6F1: mov     ebp, esp
0x78C6F3: push    0FFFFFFFFh
0x78C6F5: push    offset SEH_78C6F0
0x78C6FA: mov     eax, large fs:0
0x78C700: push    eax
0x78C701: sub     esp, 40h
0x78C704: push    ebx
0x78C705: push    esi
0x78C706: push    edi
0x78C707: mov     eax, ds:0B30AACh
0x78C70C: xor     eax, ebp
0x78C70E: push    eax
0x78C70F: lea     eax, [ebp+var_C]
0x78C712: mov     large fs:0, eax
0x78C718: mov     [ebp+var_10], esp
0x78C71B: mov     esi, ecx
0x78C71D: mov     ebx, [ebp+geometryFlags]
0x78C720: test    bl, 1
0x78C723: mov     edi, [ebp+Src]
0x78C726: mov     [ebp+var_4], 0
0x78C72D: jz      short loc_78C739
0x78C72F: mov     eax, [ebp+MaxCount]
0x78C732: push    eax; lodLevel
0x78C733: push    edi; geometry
0x78C734: call    CSpeedTreeRT__GetBranchGeometry; Oblivion branch export is authoritative: publishes the legacy single wind stream plus distinct diffuse and projected-shadow UV streams into a 0x3C indexed-geometry output block.
0x78C739: test    bl, 2
0x78C73C: jz      short loc_78C74A
0x78C73E: mov     ecx, dword ptr [ebp+lodLevel]
0x78C741: push    ecx; lodLevel
0x78C742: push    edi; geometry
0x78C743: mov     ecx, esi; this
0x78C745: call    CSpeedTreeRT__GetFrondGeometry; SpeedTreeOBSE 2026-05-30: C:\src\Fronds reference layer instruments this GetFrondGeometry export callsite under the frond restoration opt-in.
0x78C74A: test    bl, 4
0x78C74D: jz      short loc_78C75B
0x78C74F: mov     edx, [ebp+leafLod]
0x78C752: push    edx; lodLevel
0x78C753: push    edi; geometry
0x78C754: mov     ecx, esi; this
0x78C756: call    CSpeedTreeRT__GetLeafGeometry; Leaf dispatcher forwards the caller's leafLod unchanged to OB_CSpeedTreeRT_ExportLeafGeometry. Stock 0x562744 and plugin fallback both pass explicit 0..lodCount-1 indices.
0x78C75B: test    bl, 8
0x78C75E: jz      loc_78C84B; 2026-05-21 360 gap pass: GetGeometry billboard bit 0x08 branch exists but current stock callsites still pass only 0x01 or 0x04.
0x78C764: cmp     byte ptr [esi+6Ch], 0
0x78C768: jz      loc_78C843
0x78C76E: test    bl, 10h
0x78C771: jnz     loc_78C843; 2026-05-21 360 gap pass: billboard branch chooses simple billboard if 360 flag +0x6C is false or caller flag 0x10 requests simple output.
0x78C777: push    ebx; flags
0x78C778: push    edi; geometry
0x78C779: mov     ecx, esi; this
0x78C77B: call    CSpeedTreeRT__Get360BillboardGeometry; 2026-05-21 360 gap pass: 360 export is reachable only through GetGeometry bit 0x08 and +0x6C true; no current stock caller requests this branch.
0x78C780: mov     ecx, [ebp+var_C]
0x78C783: mov     large fs:0, ecx
0x78C78A: pop     ecx
0x78C78B: pop     edi
0x78C78C: pop     esi
0x78C78D: pop     ebx
0x78C78E: mov     esp, ebp
0x78C790: pop     ebp
0x78C791: retn    14h
0x78C794: mov     ecx, [ebp+var_14]
0x78C797: mov     eax, [ecx]
0x78C799: mov     edx, [eax+4]
0x78C79C: call    edx
0x78C79E: push    eax
0x78C79F: push    offset aCspeedtreer_14; "CSpeedTreeRT::GetGeometry"
0x78C7A4: push    offset aSFailedS; "%s - failed [%s]"
0x78C7A9: lea     esi, [ebp+result]; result
0x78C7AC: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78C7B1: add     esp, 0Ch
0x78C7B4: cmp     dword ptr [eax+18h], 10h
0x78C7B8: mov     byte ptr [ebp+var_4], 2
0x78C7BC: jb      short loc_78C7C3
0x78C7BE: mov     eax, [eax+4]
0x78C7C1: jmp     short loc_78C7C6
0x78C7C3: add     eax, 4
0x78C7C6: push    eax; error
0x78C7C7: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78C7CC: add     esp, 4
0x78C7CF: lea     ecx, [ebp+result]; this
0x78C7D2: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78C7D7: mov     eax, offset loc_78C7DD
0x78C7DC: retn
0x78C7DD: mov     ecx, [ebp+var_C]
0x78C7E0: mov     large fs:0, ecx
0x78C7E7: pop     ecx
0x78C7E8: pop     edi
0x78C7E9: pop     esi
0x78C7EA: pop     ebx
0x78C7EB: mov     esp, ebp
0x78C7ED: pop     ebp
0x78C7EE: retn    14h
0x78C7F1: push    offset aCspeedtreer_14; "CSpeedTreeRT::GetGeometry"
0x78C7F6: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78C7FB: lea     esi, [ebp+var_4C]; result
0x78C7FE: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78C803: add     esp, 8
0x78C806: cmp     dword ptr [eax+18h], 10h
0x78C80A: mov     byte ptr [ebp+var_4], 3
0x78C80E: jb      short loc_78C815
0x78C810: mov     eax, [eax+4]
0x78C813: jmp     short loc_78C818
0x78C815: add     eax, 4
0x78C818: push    eax; error
0x78C819: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78C81E: add     esp, 4
0x78C821: lea     ecx, [ebp+var_4C]; this
0x78C824: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78C829: mov     eax, offset loc_78C82F
0x78C82E: retn
0x78C82F: mov     ecx, [ebp+var_C]
0x78C832: mov     large fs:0, ecx
0x78C839: pop     ecx
0x78C83A: pop     edi
0x78C83B: pop     esi
0x78C83C: pop     ebx
0x78C83D: mov     esp, ebp
0x78C83F: pop     ebp
0x78C840: retn    14h
0x78C843: push    edi; geometry
0x78C844: mov     ecx, esi; this
0x78C846: call    CSpeedTreeRT__GetSimpleBillboardGeometry; 2026-05-21 360 gap pass: simple billboard fallback behind GetGeometry bit 0x08; stock TES4 tree builders use separate STBB paths and do not call this dispatcher branch.
0x78C84B: mov     ecx, [ebp+var_C]
0x78C84E: mov     large fs:0, ecx
0x78C855: pop     ecx
0x78C856: pop     edi
0x78C857: pop     esi
0x78C858: pop     ebx
0x78C859: mov     esp, ebp
0x78C85B: pop     ebp
0x78C85C: retn    14h
0x9CB860: lea     ecx, [ebp+result]; this
0x9CB863: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB868: lea     ecx, [ebp+var_4C]; this
0x9CB86B: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB870: mov     edx, [esp-4+geometryFlags]
0x9CB874: lea     eax, [edx+0Ch]
0x9CB877: mov     ecx, [edx-50h]
0x9CB87A: xor     ecx, eax
0x9CB87C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB881: mov     eax, offset stru_AF450C
0x9CB886: jmp     ___CxxFrameHandler3
