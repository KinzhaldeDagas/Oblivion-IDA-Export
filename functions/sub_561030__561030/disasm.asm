0x561030: push    0FFFFFFFFh
0x561032: push    offset SEH_8C62B0
0x561037: mov     eax, large fs:0
0x56103D: push    eax
0x56103E: push    ecx
0x56103F: push    esi
0x561040: mov     eax, ds:0B30AACh
0x561045: xor     eax, esp
0x561047: push    eax
0x561048: lea     eax, [esp+18h+var_C]
0x56104C: mov     large fs:0, eax
0x561052: push    1Ch; Size
0x561054: call    FormHeapAlloc
0x561059: mov     esi, eax
0x56105B: add     esp, 4
0x56105E: mov     [esp+18h+var_10], esi
0x561062: test    esi, esi
0x561064: mov     [esp+18h+var_4], 0
0x56106C: jz      short loc_561089
0x56106E: mov     ecx, esi; this
0x561070: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x561075: mov     dword ptr [esi], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x56107B: mov     word ptr [esi+18h], 0ECh ; 'ì'
0x561081: mov     byte ptr [esi+1Ah], 0
0x561085: mov     eax, esi
0x561087: jmp     short loc_56108B
0x561089: xor     eax, eax
0x56108B: mov     cx, [eax+18h]
0x56108F: and     cx, 0F3FEh
0x561094: or      cx, 1200h
0x561099: mov     [eax+18h], cx
0x56109D: mov     byte ptr [eax+1Ah], 54h ; 'T'
0x5610A1: mov     ecx, [esp+18h+var_C]
0x5610A5: mov     large fs:0, ecx
0x5610AC: pop     ecx
0x5610AD: pop     esi
0x5610AE: add     esp, 10h
0x5610B1: retn
