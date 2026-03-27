0x4690D0: push    0FFFFFFFFh
0x4690D2: push    offset TESBipedModelForm_constr_SEH
0x4690D7: mov     eax, large fs:0
0x4690DD: push    eax
0x4690DE: push    ecx
0x4690DF: push    ebx
0x4690E0: push    ebp
0x4690E1: push    esi
0x4690E2: push    edi
0x4690E3: mov     eax, ds:0B30AACh
0x4690E8: xor     eax, esp
0x4690EA: push    eax
0x4690EB: lea     eax, [esp+24h+var_C]
0x4690EF: mov     large fs:0, eax
0x4690F5: mov     esi, ecx
0x4690F7: mov     [esp+24h+var_10], esi
0x4690FB: push    offset ??1TESModel@@UAE@XZ; a5
0x469100: push    offset ??0TESModel@@QAE@XZ; a4
0x469105: push    2; size
0x469107: push    18h; a2
0x469109: lea     edi, [esi+8]
0x46910C: push    edi; a1
0x46910D: mov     dword ptr [esi], offset ??_7TESBipedModelForm@@6B@; const TESBipedModelForm::`vftable'
0x469113: call    ArrayConstructor
0x469118: push    offset ??1TESModel@@UAE@XZ; a5
0x46911D: push    offset ??0TESModel@@QAE@XZ; a4
0x469122: push    2; size
0x469124: push    18h; a2
0x469126: lea     ebp, [esi+38h]
0x469129: push    ebp; a1
0x46912A: mov     [esp+38h+var_4], 0
0x469132: call    ArrayConstructor
0x469137: push    offset j_TESTexture_destr; a5
0x46913C: push    offset TESIcon_constr; a4
0x469141: push    2; size
0x469143: push    0Ch; a2
0x469145: lea     ebx, [esi+68h]
0x469148: push    ebx; a1
0x469149: mov     byte ptr [esp+38h+var_4], 1
0x46914E: call    ArrayConstructor
0x469153: mov     eax, [edi]
0x469155: mov     edx, [eax]
0x469157: mov     ecx, edi
0x469159: mov     byte ptr [esp+24h+var_4], 2
0x46915E: mov     word ptr [esi+4], 0
0x469164: mov     byte ptr [esi+6], 0
0x469168: call    edx
0x46916A: mov     eax, [ebp+0]
0x46916D: mov     edx, [eax]
0x46916F: mov     ecx, ebp
0x469171: call    edx
0x469173: mov     eax, [ebx]
0x469175: mov     edx, [eax]
0x469177: mov     ecx, ebx
0x469179: call    edx
0x46917B: mov     eax, [esi+20h]
0x46917E: mov     edx, [eax]
0x469180: lea     ecx, [esi+20h]
0x469183: call    edx
0x469185: mov     eax, [esi+50h]
0x469188: mov     edx, [eax]
0x46918A: lea     ecx, [esi+50h]
0x46918D: call    edx
0x46918F: mov     eax, [esi+74h]
0x469192: mov     edx, [eax]
0x469194: lea     ecx, [esi+74h]
0x469197: call    edx
0x469199: mov     eax, esi
0x46919B: mov     ecx, [esp+24h+var_C]
0x46919F: mov     large fs:0, ecx
0x4691A6: pop     ecx
0x4691A7: pop     edi
0x4691A8: pop     esi
0x4691A9: pop     ebp
0x4691AA: pop     ebx
0x4691AB: add     esp, 10h
0x4691AE: retn
