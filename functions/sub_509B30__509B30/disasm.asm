0x509B30: push    ebp
0x509B31: mov     ebp, esp
0x509B33: and     esp, 0FFFFFFC0h
0x509B36: sub     esp, 34h
0x509B39: mov     ecx, [ebp+l]
0x509B3C: mov     edx, [ebp+arg_10]
0x509B3F: push    ebx
0x509B40: push    esi
0x509B41: push    edi
0x509B42: lea     eax, [esp+40h+var_14]
0x509B46: push    eax; UInt16
0x509B47: mov     eax, [ebp+arg_C]
0x509B4A: push    ecx; l
0x509B4B: mov     ecx, [ebp+a4]
0x509B4E: push    edx; a6
0x509B4F: mov     edx, [ebp+a3]
0x509B52: push    eax; a5
0x509B53: mov     eax, [ebp+arg_4]
0x509B56: push    ecx; a4
0x509B57: mov     ecx, [ebp+a1]
0x509B5A: push    edx; a3
0x509B5B: push    eax; a2
0x509B5C: push    ecx; a1
0x509B5D: mov     dword ptr [esp+60h+var_14], 0
0x509B65: call    Script_ExtractArgs
0x509B6A: add     esp, 20h
0x509B6D: test    al, al
0x509B6F: jnz     short loc_509B78
0x509B71: pop     edi
0x509B72: pop     esi
0x509B73: pop     ebx
0x509B74: mov     esp, ebp
0x509B76: pop     ebp
0x509B77: retn
0x509B78: mov     ecx, dword ptr [esp+40h+var_14]
0x509B7C: test    ecx, ecx
0x509B7E: jz      loc_509C0D
0x509B84: mov     edi, [ecx+1Ch]
0x509B87: test    edi, edi
0x509B89: jz      short loc_509BB4
0x509B8B: cmp     dword ptr [edi+4Ch], 0
0x509B8F: mov     ebx, [ecx+58h]
0x509B92: lea     eax, [edi+48h]
0x509B95: jnz     short loc_509C16
0x509B97: cmp     dword ptr [eax], 0
0x509B9A: jnz     short loc_509C16
0x509B9C: mov     edx, [ecx]
0x509B9E: mov     eax, [edx+0D4h]
0x509BA4: call    eax
0x509BA6: push    eax
0x509BA7: push    offset aNoScriptVariab; "No script variables on quest %s"
0x509BAC: call    Interface_ConsolePrint
0x509BB1: add     esp, 8
0x509BB4: push    offset aQuestState; "--- Quest state -----------------------"...
0x509BB9: call    Interface_ConsolePrint
0x509BBE: mov     ecx, dword ptr [esp+44h+var_14]
0x509BC2: add     esp, 4
0x509BC5: test    byte ptr [ecx+3Ch], 1
0x509BC9: mov     eax, offset off_A3DAE8
0x509BCE: jnz     short loc_509BD5
0x509BD0: mov     eax, offset aNo_1; "No"
0x509BD5: push    eax
0x509BD6: push    offset aRunning?S; "Running?       %s"
0x509BDB: call    Interface_ConsolePrint
0x509BE0: mov     ecx, dword ptr [esp+48h+var_14]
0x509BE4: add     esp, 8
0x509BE7: call    sub_529750
0x509BEC: push    eax
0x509BED: push    offset aCurrentStageD; "Current stage: %d"
0x509BF2: call    Interface_ConsolePrint
0x509BF7: mov     edx, dword ptr [esp+48h+var_14]
0x509BFB: movzx   eax, byte ptr [edx+3Dh]
0x509BFF: push    eax
0x509C00: push    offset aPriorityD; "Priority:      %d"
0x509C05: call    Interface_ConsolePrint
0x509C0A: add     esp, 10h
0x509C0D: pop     edi
0x509C0E: pop     esi
0x509C0F: mov     al, 1
0x509C11: pop     ebx
0x509C12: mov     esp, ebp
0x509C14: pop     ebp
0x509C15: retn
0x509C16: test    ebx, ebx
0x509C18: jz      short loc_509BB4
0x509C1A: lea     ebx, [ebx+0]
0x509C20: test    eax, eax
0x509C22: jz      short loc_509BB4
0x509C24: mov     esi, [eax]
0x509C26: test    esi, esi
0x509C28: jz      short loc_509BB4
0x509C2A: mov     ecx, [eax+4]
0x509C2D: mov     edx, [esi]
0x509C2F: mov     [esp+40h+var_10], ecx
0x509C33: push    edx
0x509C34: mov     ecx, ebx
0x509C36: call    sub_4FA1B0
0x509C3B: test    al, al
0x509C3D: push    0; a3
0x509C3F: jz      short loc_509C92
0x509C41: mov     eax, [esi]
0x509C43: push    eax; ArgList
0x509C44: mov     ecx, ebx; this
0x509C46: mov     [esp+48h+var_C], 0
0x509C4E: call    sub_4FA110
0x509C53: fstp    [esp+40h+var_8]
0x509C57: lea     ecx, [esp+40h+var_8]
0x509C5B: push    ecx
0x509C5C: lea     edx, [esp+44h+var_C]
0x509C60: push    edx
0x509C61: call    sub_4F9FC0
0x509C66: mov     eax, [esp+48h+var_C]
0x509C6A: mov     esi, [esi+18h]
0x509C6D: mov     edx, [edi]
0x509C6F: add     esp, 8
0x509C72: push    eax
0x509C73: mov     eax, [edx+0D4h]
0x509C79: push    esi
0x509C7A: mov     ecx, edi
0x509C7C: call    eax
0x509C7E: push    eax
0x509C7F: push    offset aSS08x_0; "%s->%s = (%08X)"
0x509C84: call    Interface_ConsolePrint
0x509C89: mov     eax, [esp+50h+var_10]
0x509C8D: add     esp, 10h
0x509C90: jmp     short loc_509C20
0x509C92: cmp     byte ptr [esi+10h], 0
0x509C96: mov     ecx, [esi+18h]
0x509C99: mov     edx, [esi]
0x509C9B: mov     [esp+44h+var_C], ecx
0x509C9F: push    edx; ArgList
0x509CA0: mov     ecx, ebx; this
0x509CA2: jz      short loc_509CD7
0x509CA4: call    sub_4FA110
0x509CA9: call    Double_To_SInt32
0x509CAE: mov     edx, [edi]
0x509CB0: push    eax
0x509CB1: mov     eax, [esp+44h+var_C]
0x509CB5: push    eax
0x509CB6: mov     eax, [edx+0D4h]
0x509CBC: mov     ecx, edi
0x509CBE: call    eax
0x509CC0: push    eax
0x509CC1: push    offset aSSD; "%s->%s = %d"
0x509CC6: call    Interface_ConsolePrint
0x509CCB: mov     eax, [esp+50h+var_10]
0x509CCF: add     esp, 10h
0x509CD2: jmp     loc_509C20
0x509CD7: call    sub_4FA110
0x509CDC: mov     eax, [esp+40h+var_C]
0x509CE0: mov     edx, [edi]
0x509CE2: sub     esp, 8
0x509CE5: fstp    [esp+48h+var_48]
0x509CE8: push    eax
0x509CE9: mov     eax, [edx+0D4h]
0x509CEF: mov     ecx, edi
0x509CF1: call    eax
0x509CF3: push    eax
0x509CF4: push    offset aSS0_4f; "%s->%s = %0.4f"
0x509CF9: call    Interface_ConsolePrint
0x509CFE: mov     eax, [esp+54h+var_10]
0x509D02: add     esp, 14h
0x509D05: jmp     loc_509C20
