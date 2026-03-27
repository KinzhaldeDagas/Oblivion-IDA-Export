0x69F100: push    0FFFFFFFFh
0x69F102: push    offset SEH_8C62B0
0x69F107: mov     eax, large fs:0
0x69F10D: push    eax
0x69F10E: push    ecx
0x69F10F: push    esi
0x69F110: mov     eax, ds:0B30AACh
0x69F115: xor     eax, esp
0x69F117: push    eax
0x69F118: lea     eax, [esp+18h+var_C]
0x69F11C: mov     large fs:0, eax
0x69F122: mov     eax, ds:0B3C0CCh
0x69F127: xor     esi, esi
0x69F129: cmp     eax, esi
0x69F12B: jnz     short loc_69F17E
0x69F12D: push    84h ; '„'; Size
0x69F132: call    FormHeapAlloc
0x69F137: add     esp, 4
0x69F13A: mov     [esp+18h+var_10], eax
0x69F13E: cmp     eax, esi
0x69F140: mov     [esp+18h+var_4], esi
0x69F144: jz      short loc_69F14F
0x69F146: mov     ecx, eax; this
0x69F148: call    ??0TESAmmo@@QAE@XZ; TESAmmo::TESAmmo(void)
0x69F14D: mov     esi, eax
0x69F14F: mov     eax, [esi+30h]
0x69F152: mov     edx, [eax+18h]
0x69F155: lea     ecx, [esi+30h]
0x69F158: push    offset aMarker_error_n; "marker_error.nif"
0x69F15D: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x69F165: call    edx
0x69F167: mov     ecx, ds:0B33A98h
0x69F16D: push    esi
0x69F16E: mov     ds:0B3C0CCh, esi
0x69F174: call    TESDataHandler_AddForm
0x69F179: mov     eax, ds:0B3C0CCh
0x69F17E: mov     ecx, dword ptr [esp+18h+var_C]
0x69F182: mov     large fs:0, ecx
0x69F189: pop     ecx
0x69F18A: pop     esi
0x69F18B: add     esp, 10h
0x69F18E: retn
