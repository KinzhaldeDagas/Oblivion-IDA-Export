0x692040: push    0FFFFFFFFh
0x692042: push    offset SEH_8C62B0
0x692047: mov     eax, large fs:0
0x69204D: push    eax
0x69204E: push    ecx
0x69204F: push    esi
0x692050: mov     eax, ds:0B30AACh
0x692055: xor     eax, esp
0x692057: push    eax
0x692058: lea     eax, [esp+18h+var_C]
0x69205C: mov     large fs:0, eax
0x692062: push    3Ch ; '<'; Size
0x692064: call    FormHeapAlloc
0x692069: mov     esi, eax
0x69206B: add     esp, 4
0x69206E: mov     [esp+18h+var_10], esi
0x692072: xor     eax, eax
0x692074: cmp     esi, eax
0x692076: mov     [esp+18h+var_4], eax
0x69207A: jz      short loc_69209A
0x69207C: mov     eax, [esp+18h+arg_8]
0x692080: mov     ecx, [esp+18h+arg_4]
0x692084: mov     edx, [esp+18h+arg_0]
0x692088: push    eax; int
0x692089: push    ecx; int
0x69208A: push    edx; int
0x69208B: mov     ecx, esi; this
0x69208D: call    ValueModifierEffect_constr
0x692092: mov     dword ptr [esi], offset ??_7ChameleonEffect@@6B@; const ChameleonEffect::`vftable'
0x692098: mov     eax, esi
0x69209A: mov     ecx, dword ptr [esp+18h+var_C]
0x69209E: mov     large fs:0, ecx
0x6920A5: pop     ecx
0x6920A6: pop     esi
0x6920A7: add     esp, 10h
0x6920AA: retn
