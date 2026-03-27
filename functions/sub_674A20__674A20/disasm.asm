0x674A20: push    ebp
0x674A21: mov     ebp, esp
0x674A23: and     esp, 0FFFFFFF8h
0x674A26: sub     esp, 10h
0x674A29: push    ebx
0x674A2A: push    ebp
0x674A2B: push    esi
0x674A2C: mov     esi, ecx
0x674A2E: mov     ecx, ds:0B333C4h; this
0x674A34: push    edi
0x674A35: call    PlayerCharacter__IsSleeping?
0x674A3A: test    al, al
0x674A3C: jnz     loc_674DF9
0x674A42: lea     ebp, [esi+58h]
0x674A45: test    ebp, ebp
0x674A47: mov     ebx, ebp
0x674A49: jz      loc_674DD9
0x674A4F: nop
0x674A50: mov     ecx, [ebx]
0x674A52: test    ecx, ecx
0x674A54: jz      loc_674DD9
0x674A5A: mov     eax, [ecx]
0x674A5C: mov     edx, [eax+188h]
0x674A62: mov     dword ptr ds:0B3BCF8h, 0
0x674A6C: call    edx
0x674A6E: test    al, al
0x674A70: jz      short loc_674A7C
0x674A72: mov     ecx, [ebx]
0x674A74: mov     ds:0B3BCF8h, ecx
0x674A7A: jmp     short loc_674A82
0x674A7C: mov     ecx, ds:0B3BCF8h
0x674A82: test    ecx, ecx
0x674A84: jz      loc_674DD1
0x674A8A: mov     eax, [ecx]
0x674A8C: mov     edx, [eax+190h]
0x674A92: xor     esi, esi
0x674A94: call    edx
0x674A96: test    al, al
0x674A98: mov     ecx, ds:0B3BCF8h; this
0x674A9E: jz      short loc_674AA2
0x674AA0: mov     esi, ecx
0x674AA2: cmp     dword ptr [ecx+58h], 0
0x674AA6: mov     ebx, [ebx+4]
0x674AA9: jnz     loc_674B38
0x674AAF: mov     eax, [ecx+8]
0x674AB2: shr     eax, 5
0x674AB5: test    al, 1
0x674AB7: jz      short loc_674AEA
0x674AB9: push    0FFFFFFFFh; a2
0x674ABB: call    TESForm_GetOverrideFile
0x674AC0: test    eax, eax
0x674AC2: mov     ecx, ds:0B3BCF8h
0x674AC8: jnz     short loc_674AEA
0x674ACA: test    ecx, ecx
0x674ACC: jz      short loc_674B2B
0x674ACE: mov     edx, [ecx]
0x674AD0: mov     eax, [edx+10h]
0x674AD3: push    1
0x674AD5: call    eax
0x674AD7: mov     ecx, ds:0B3BCF8h
0x674ADD: push    ecx
0x674ADE: mov     ecx, ebp
0x674AE0: call    BSSimpleList_Remove
0x674AE5: jmp     loc_674DCF
0x674AEA: mov     eax, [ecx+8]
0x674AED: mov     edx, eax
0x674AEF: shr     edx, 5
0x674AF2: test    dl, 1
0x674AF5: jnz     short loc_674AFE
0x674AF7: shr     eax, 0Bh
0x674AFA: test    al, 1
0x674AFC: jz      short loc_674B2B
0x674AFE: cmp     dword ptr [ecx+58h], 0
0x674B02: jz      short loc_674B2B
0x674B04: call    Actor__GetProcessLevel
0x674B09: push    eax
0x674B0A: mov     eax, ds:0B3BCF8h
0x674B0F: push    eax
0x674B10: mov     ecx, offset ActorProcessManager_ptr
0x674B15: call    sub_674550
0x674B1A: mov     ecx, ds:0B3BCF8h
0x674B20: call    sub_659BC0
0x674B25: mov     ecx, ds:0B3BCF8h
0x674B2B: push    ecx
0x674B2C: mov     ecx, ebp
0x674B2E: call    BSSimpleList_Remove
0x674B33: jmp     loc_674DCF
0x674B38: test    esi, esi
0x674B3A: jz      loc_674C94
0x674B40: mov     edx, [esi]
0x674B42: mov     eax, [edx+198h]
0x674B48: push    0
0x674B4A: mov     ecx, esi
0x674B4C: call    eax
0x674B4E: test    al, al
0x674B50: jz      loc_674C8E
0x674B56: mov     ecx, esi
0x674B58: call    Actor__IsEssential
0x674B5D: test    al, al
0x674B5F: jnz     loc_674C8E
0x674B65: mov     ecx, esi
0x674B67: call    sub_5E1D70
0x674B6C: test    al, al
0x674B6E: jz      loc_674C8E
0x674B74: push    0; a2
0x674B76: mov     ecx, esi; this
0x674B78: call    TESObjectREFR_GetParentCell
0x674B7D: mov     ecx, ds:0B333A0h
0x674B83: push    eax; a1
0x674B84: call    TESObjectCELL_IsProcessLevel?LowHigh
0x674B89: test    al, al
0x674B8B: jnz     loc_674C8E
0x674B91: mov     ecx, [esi+58h]
0x674B94: mov     edx, [ecx]
0x674B96: mov     eax, [edx+4F0h]
0x674B9C: call    eax
0x674B9E: fcomp   dword ptr ds:0A2FAA8h
0x674BA4: fnstsw  ax
0x674BA6: test    ah, 44h
0x674BA9: jnp     loc_674C8E
0x674BAF: mov     ecx, [esi+58h]
0x674BB2: mov     edx, [ecx]
0x674BB4: mov     eax, [edx+4F0h]
0x674BBA: mov     edi, ds:0B35C1Ch
0x674BC0: call    eax
0x674BC2: test    edi, edi
0x674BC4: mov     dword ptr [esp+20h+var_14+4], edi
0x674BC8: fild    dword ptr [esp+20h+var_14+4]
0x674BCC: jge     short loc_674BD4
0x674BCE: fadd    dword ptr ds:0A2FC78h
0x674BD4: faddp   st(1), st
0x674BD6: mov     ecx, offset TimeGlobals
0x674BDB: fstp    [esp+20h+var_C+4]
0x674BDF: call    TimeGlobals_GetGameDaysPassed
0x674BE4: test    eax, eax
0x674BE6: mov     dword ptr [esp+20h+var_14+4], eax
0x674BEA: fild    dword ptr [esp+20h+var_14+4]
0x674BEE: jge     short loc_674BF6
0x674BF0: fadd    dword ptr ds:0A2FC78h
0x674BF6: fmul    qword ptr ds:0A2F920h
0x674BFC: mov     ecx, offset TimeGlobals
0x674C01: fstp    [esp+20h+var_14+4]
0x674C05: call    TimeGlobals_GetGameHour
0x674C0A: fadd    [esp+20h+var_14+4]
0x674C0E: fcomp   [esp+20h+var_C+4]
0x674C12: fnstsw  ax
0x674C14: test    ah, 41h
0x674C17: jnz     short loc_674C8E
0x674C19: mov     edx, [esi]
0x674C1B: mov     eax, [edx+20Ch]
0x674C21: push    0
0x674C23: push    0
0x674C25: push    1
0x674C27: mov     ecx, esi
0x674C29: call    eax
0x674C2B: lea     ebx, [esi+44h]
0x674C2E: mov     ecx, ebx
0x674C30: call    sub_420480
0x674C35: mov     edi, eax
0x674C37: test    edi, edi
0x674C39: jz      short loc_674C7B
0x674C3B: jmp     short loc_674C40
0x674C3D: align 10h
0x674C40: mov     ecx, edi
0x674C42: call    BSSimpleList_IsEmpty
0x674C47: test    al, al
0x674C49: jnz     short loc_674C74
0x674C4B: mov     esi, [edi]
0x674C4D: push    0
0x674C4F: lea     ecx, [esi+44h]
0x674C52: call    sub_4203E0
0x674C57: mov     edx, [esi]
0x674C59: mov     eax, [edx+78h]
0x674C5C: mov     ecx, esi
0x674C5E: call    eax
0x674C60: test    al, al
0x674C62: jnz     short loc_674C6B
0x674C64: mov     ecx, esi
0x674C66: call    sub_4D6640
0x674C6B: mov     ecx, edi
0x674C6D: call    sub_67F100
0x674C72: jmp     short loc_674C40
0x674C74: mov     ecx, ebx
0x674C76: call    sub_4204A0
0x674C7B: mov     ecx, ds:0B3BCF8h
0x674C81: push    ecx
0x674C82: mov     ecx, ebp
0x674C84: call    BSSimpleList_Remove
0x674C89: jmp     loc_674DCF
0x674C8E: mov     ecx, ds:0B3BCF8h
0x674C94: mov     esi, 20000h
0x674C99: test    [ecx+8], esi
0x674C9C: jz      loc_674DD1
0x674CA2: mov     edx, [ecx]
0x674CA4: mov     eax, [edx+0A0h]
0x674CAA: push    0
0x674CAC: call    eax
0x674CAE: mov     ecx, ds:0B3BCF8h
0x674CB4: push    ecx
0x674CB5: mov     ecx, ebp
0x674CB7: call    BSSimpleList_Remove
0x674CBC: mov     ecx, ds:0B3BCF8h; this
0x674CC2: mov     edx, [ecx+8]
0x674CC5: shr     edx, 5
0x674CC8: test    dl, 1
0x674CCB: jz      short loc_674CF4
0x674CCD: push    0FFFFFFFFh; a2
0x674CCF: call    TESForm_GetOverrideFile
0x674CD4: test    eax, eax
0x674CD6: mov     ecx, ds:0B3BCF8h
0x674CDC: jnz     short loc_674CF4
0x674CDE: test    ecx, ecx
0x674CE0: jz      loc_674DCF
0x674CE6: mov     eax, [ecx]
0x674CE8: mov     edx, [eax+10h]
0x674CEB: push    1
0x674CED: call    edx
0x674CEF: jmp     loc_674DCF
0x674CF4: mov     eax, [ecx+8]
0x674CF7: mov     edx, eax
0x674CF9: shr     edx, 5
0x674CFC: test    dl, 1
0x674CFF: jnz     loc_674DA7
0x674D05: shr     eax, 0Bh
0x674D08: test    al, 1
0x674D0A: jnz     loc_674DA7
0x674D10: mov     eax, [ecx+58h]
0x674D13: test    eax, eax
0x674D15: jz      short loc_674D80
0x674D17: mov     edx, [eax]
0x674D19: mov     ecx, eax
0x674D1B: mov     eax, [edx+248h]
0x674D21: call    eax
0x674D23: test    al, al
0x674D25: mov     ecx, ds:0B3BCF8h
0x674D2B: jz      short loc_674D80
0x674D2D: mov     ecx, [ecx+58h]
0x674D30: mov     eax, [ecx+8]
0x674D33: test    eax, eax
0x674D35: jz      short loc_674D4A
0x674D37: mov     al, [eax+20h]
0x674D3A: cmp     al, 1
0x674D3C: jz      loc_674DCF
0x674D42: cmp     al, 2
0x674D44: jz      loc_674DCF
0x674D4A: mov     edx, [ecx]
0x674D4C: mov     eax, [edx+24Ch]
0x674D52: push    0
0x674D54: call    eax
0x674D56: mov     ecx, ds:0B3BCF8h
0x674D5C: mov     ecx, [ecx+58h]
0x674D5F: mov     edx, [ecx]
0x674D61: mov     eax, [edx+8]
0x674D64: push    0
0x674D66: push    0
0x674D68: push    0
0x674D6A: call    eax
0x674D6C: mov     ecx, ds:0B3BCF8h
0x674D72: push    eax
0x674D73: push    ecx
0x674D74: mov     ecx, offset ActorProcessManager_ptr
0x674D79: call    sub_673A90
0x674D7E: jmp     short loc_674DCF
0x674D80: mov     edx, [ecx]
0x674D82: mov     eax, [edx+1C4h]
0x674D88: call    eax
0x674D8A: mov     ecx, ds:0B3BCF8h
0x674D90: test    ecx, ecx
0x674D92: jz      short loc_674DCF
0x674D94: test    [ecx+8], esi
0x674D97: jz      short loc_674DCF
0x674D99: mov     edx, [ecx]
0x674D9B: mov     eax, [edx+0A0h]
0x674DA1: push    0
0x674DA3: call    eax
0x674DA5: jmp     short loc_674DCF
0x674DA7: cmp     dword ptr [ecx+58h], 0
0x674DAB: jz      short loc_674DCF
0x674DAD: call    Actor__GetProcessLevel
0x674DB2: mov     ecx, ds:0B3BCF8h
0x674DB8: push    eax
0x674DB9: push    ecx
0x674DBA: mov     ecx, offset ActorProcessManager_ptr
0x674DBF: call    sub_674550
0x674DC4: mov     ecx, ds:0B3BCF8h
0x674DCA: call    sub_659BC0
0x674DCF: mov     ebx, ebp
0x674DD1: test    ebx, ebx
0x674DD3: jnz     loc_674A50
0x674DD9: test    ebp, ebp
0x674DDB: mov     esi, ebp
0x674DDD: jz      short loc_674DF9
0x674DDF: nop
0x674DE0: mov     ecx, [esi]
0x674DE2: test    ecx, ecx
0x674DE4: jz      short loc_674DF9
0x674DE6: mov     edx, [ecx]
0x674DE8: mov     eax, [edx+0A0h]
0x674DEE: push    1
0x674DF0: call    eax
0x674DF2: mov     esi, [esi+4]
0x674DF5: test    esi, esi
0x674DF7: jnz     short loc_674DE0
0x674DF9: pop     edi
0x674DFA: pop     esi
0x674DFB: pop     ebp
0x674DFC: pop     ebx
0x674DFD: mov     esp, ebp
0x674DFF: pop     ebp
0x674E00: retn
