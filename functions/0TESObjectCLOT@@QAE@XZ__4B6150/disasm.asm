0x4B6150: push    0FFFFFFFFh
0x4B6152: push    offset ??0TESObjectCLOT@@QAE@XZ_SEH
0x4B6157: mov     eax, large fs:0
0x4B615D: push    eax
0x4B615E: push    ecx
0x4B615F: push    ebx
0x4B6160: push    ebp
0x4B6161: push    esi
0x4B6162: push    edi
0x4B6163: mov     eax, ds:0B30AACh
0x4B6168: xor     eax, esp
0x4B616A: push    eax
0x4B616B: lea     eax, [esp+24h+var_C]
0x4B616F: mov     large fs:0, eax
0x4B6175: mov     esi, ecx
0x4B6177: mov     [esp+24h+var_10], esi
0x4B617B: call    TESBoundObject_constr
0x4B6180: xor     eax, eax
0x4B6182: mov     dword ptr [esi+24h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x4B6189: mov     [esp+24h+var_4], eax
0x4B618D: mov     [esi+28h], eax
0x4B6190: mov     [esi+2Ch], ax
0x4B6194: mov     [esi+2Eh], ax
0x4B6198: lea     edi, [esi+30h]
0x4B619B: mov     ecx, edi
0x4B619D: mov     byte ptr [esp+24h+var_4], 1
0x4B61A2: call    TESScriptableForm_constr
0x4B61A7: lea     ebp, [esi+3Ch]
0x4B61AA: mov     ecx, ebp
0x4B61AC: call    TESEnchantableForm_constr
0x4B61B1: lea     ebx, [esi+4Ch]
0x4B61B4: mov     ecx, ebx
0x4B61B6: call    TESValueForm_constr
0x4B61BB: lea     ecx, [esi+54h]
0x4B61BE: mov     byte ptr [esp+24h+var_4], 2
0x4B61C3: call    TESWeightForm_constr
0x4B61C8: lea     ecx, [esi+5Ch]
0x4B61CB: mov     byte ptr [esp+24h+var_4], 3
0x4B61D0: call    TESBipedModelForm_constr
0x4B61D5: mov     ecx, esi; this
0x4B61D7: mov     byte ptr [esp+24h+var_4], 4
0x4B61DC: mov     dword ptr [esi], offset ??_7TESObjectCLOT@@6BTESObjectCLOT@@@; const TESObjectCLOT::`vftable'{for `TESObjectCLOT'}
0x4B61E2: mov     dword ptr [esi+24h], offset ??_7TESObjectCLOT@@6BTESFullName@@@; const TESObjectCLOT::`vftable'{for `TESFullName'}
0x4B61E9: mov     dword ptr [edi], offset ??_7TESObjectCLOT@@6BTESScriptableForm@@@; const TESObjectCLOT::`vftable'{for `TESScriptableForm'}
0x4B61EF: mov     dword ptr [ebp+0], offset ??_7TESObjectCLOT@@6BTESEnchantableForm@@@; const TESObjectCLOT::`vftable'{for `TESEnchantableForm'}
0x4B61F6: mov     dword ptr [ebx], offset ??_7TESObjectCLOT@@6BTESValueForm@@@; const TESObjectCLOT::`vftable'{for `TESValueForm'}
0x4B61FC: mov     dword ptr [esi+54h], offset ??_7TESObjectCLOT@@6BTESWeightForm@@@; const TESObjectCLOT::`vftable'{for `TESWeightForm'}
0x4B6203: mov     dword ptr [esi+5Ch], offset ??_7TESObjectCLOT@@6BTESBipedModelForm@@@; const TESObjectCLOT::`vftable'{for `TESBipedModelForm'}
0x4B620A: mov     byte ptr [esi+4], 16h
0x4B620E: call    j_TESForm_InitializeComponents
0x4B6213: mov     dword ptr [esi+48h], 3
0x4B621A: mov     eax, esi
0x4B621C: mov     ecx, [esp+24h+var_C]
0x4B6220: mov     large fs:0, ecx
0x4B6227: pop     ecx
0x4B6228: pop     edi
0x4B6229: pop     esi
0x4B622A: pop     ebp
0x4B622B: pop     ebx
0x4B622C: add     esp, 10h
0x4B622F: retn
