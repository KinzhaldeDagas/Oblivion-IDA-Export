0x45CC60: sub     esp, 204h
0x45CC66: mov     eax, ds:0B30AACh
0x45CC6B: xor     eax, esp
0x45CC6D: mov     [esp+204h+var_4], eax
0x45CC74: push    ebx
0x45CC75: mov     ebx, [esp+208h+arg_8]
0x45CC7C: push    ebp
0x45CC7D: mov     ebp, [esp+20Ch+arg_C]
0x45CC84: mov     eax, [ebp+0]
0x45CC87: push    esi
0x45CC88: mov     esi, [ebx]
0x45CC8A: push    edi
0x45CC8B: mov     edi, [esp+214h+arg_0]
0x45CC92: push    0FFFFFFFFh; int
0x45CC94: mov     [esp+218h+var_204], esi
0x45CC98: fild    [esp+218h+var_204]
0x45CC9C: push    1; int
0x45CC9E: sub     esp, 8
0x45CCA1: mov     [esp+224h+var_200], eax
0x45CCA5: fstp    [esp+224h+var_220]; float
0x45CCA9: fild    dword ptr ds:0B02E24h
0x45CCAF: fstp    [esp+224h+var_224]; float
0x45CCB2: push    offset aSavegameInfo; "SAVEGAME INFO"
0x45CCB7: call    InterfaceMgr_DebugTextLine
0x45CCBC: add     esi, [esp+228h+arg_4]
0x45CCC3: add     esp, 14h
0x45CCC6: push    0FFFFFFFFh; int
0x45CCC8: mov     [esp+218h+var_204], esi
0x45CCCC: fild    [esp+218h+var_204]
0x45CCD0: push    1; int
0x45CCD2: sub     esp, 8
0x45CCD5: mov     ecx, edi; this
0x45CCD7: fstp    [esp+224h+var_220]; float
0x45CCDB: fild    dword ptr ds:0B02E24h
0x45CCE1: fstp    [esp+224h+var_224]; float
0x45CCE4: call    TESObjectREFR_GetName
0x45CCE9: push    eax; int
0x45CCEA: call    InterfaceMgr_DebugTextLine
0x45CCEF: mov     edx, [edi+0Ch]
0x45CCF2: mov     eax, ds:0B33B00h
0x45CCF7: add     esi, [esp+228h+arg_4]
0x45CCFE: add     esp, 14h
0x45CD01: lea     ecx, [esp+214h+var_1FC]
0x45CD05: push    ecx
0x45CD06: mov     ecx, [eax]
0x45CD08: push    edx
0x45CD09: mov     [esp+21Ch+var_204], esi
0x45CD0D: mov     [esp+21Ch+var_1FC], 0
0x45CD15: call    NiTMap_GetAt
0x45CD1A: mov     eax, [esp+214h+var_1FC]
0x45CD1E: test    eax, eax
0x45CD20: jz      short loc_45CD6C
0x45CD22: mov     eax, [eax]
0x45CD24: mov     ecx, ds:0B33B00h
0x45CD2A: push    eax
0x45CD2B: push    edi
0x45CD2C: call    sub_4535A0
0x45CD31: test    eax, eax
0x45CD33: jnz     short loc_45CD8B
0x45CD35: fild    [esp+214h+var_204]
0x45CD39: push    0FFFFFFFFh; int
0x45CD3B: push    1; int
0x45CD3D: sub     esp, 8
0x45CD40: fstp    [esp+224h+var_220]; float
0x45CD44: fild    dword ptr ds:0B02E24h
0x45CD4A: fstp    [esp+224h+var_224]; float
0x45CD4D: push    offset aReferencesChan; "References changes were nullified by Ch"...
0x45CD52: call    InterfaceMgr_DebugTextLine
0x45CD57: mov     edx, [esp+228h+var_200]
0x45CD5B: add     esp, 14h
0x45CD5E: add     esi, [esp+214h+arg_4]
0x45CD65: mov     [ebx], esi
0x45CD67: mov     [ebp+0], edx
0x45CD6A: jmp     short loc_45CDD9
0x45CD6C: fild    [esp+214h+var_204]
0x45CD70: push    0FFFFFFFFh
0x45CD72: push    1
0x45CD74: sub     esp, 8
0x45CD77: fstp    [esp+224h+var_220]
0x45CD7B: fild    dword ptr ds:0B02E24h
0x45CD81: fstp    [esp+224h+var_224]
0x45CD84: push    offset aCurrentReferen; "Current reference has no changes."
0x45CD89: jmp     short loc_45CDC1
0x45CD8B: movzx   ecx, byte ptr [edi+4]
0x45CD8F: push    1
0x45CD91: push    ecx
0x45CD92: mov     ecx, ds:0B33B00h
0x45CD98: push    eax
0x45CD99: push    edi
0x45CD9A: lea     edx, [esp+224h+var_1F8]
0x45CD9E: push    edx
0x45CD9F: call    sub_453A90
0x45CDA4: push    0FFFFFFFFh; int
0x45CDA6: fild    [esp+218h+var_204]
0x45CDAA: push    1; int
0x45CDAC: sub     esp, 8
0x45CDAF: lea     eax, [esp+224h+var_1F8]
0x45CDB3: fstp    [esp+224h+var_220]; float
0x45CDB7: fild    dword ptr ds:0B02E24h
0x45CDBD: fstp    [esp+224h+var_224]; float
0x45CDC0: push    eax; int
0x45CDC1: call    InterfaceMgr_DebugTextLine
0x45CDC6: mov     ecx, [esp+228h+var_200]
0x45CDCA: add     esp, 14h
0x45CDCD: add     esi, [esp+214h+arg_4]
0x45CDD4: mov     [ebx], esi
0x45CDD6: mov     [ebp+0], ecx
0x45CDD9: mov     ecx, [esp+214h+var_4]
0x45CDE0: pop     edi
0x45CDE1: pop     esi
0x45CDE2: pop     ebp
0x45CDE3: pop     ebx
0x45CDE4: xor     ecx, esp
0x45CDE6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x45CDEB: add     esp, 204h
0x45CDF1: retn
