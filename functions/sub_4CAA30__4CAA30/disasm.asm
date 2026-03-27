0x4CAA30: sub     esp, 0Ch
0x4CAA33: push    esi
0x4CAA34: push    edi
0x4CAA35: mov     edi, ecx
0x4CAA37: mov     ecx, offset TimeGlobals
0x4CAA3C: call    TimeGlobals_GetGameDaysPassed
0x4CAA41: lea     esi, [eax+eax*2]
0x4CAA44: add     esi, esi
0x4CAA46: add     esi, esi
0x4CAA48: mov     ecx, offset TimeGlobals
0x4CAA4D: add     esi, esi
0x4CAA4F: call    TimeGlobals_GetGameHour
0x4CAA54: fnstcw  [esp+14h+var_A]
0x4CAA58: movzx   eax, [esp+14h+var_A]
0x4CAA5D: mov     ecx, ds:0B33B00h
0x4CAA63: or      eax, 0C00h
0x4CAA68: mov     dword ptr [esp+14h+var_8], eax
0x4CAA6C: fldcw   word ptr [esp+14h+var_8]
0x4CAA70: fistp   [esp+14h+var_8]
0x4CAA74: mov     eax, dword ptr [esp+14h+var_8]
0x4CAA78: add     esi, eax
0x4CAA7A: fldcw   [esp+14h+var_A]
0x4CAA7E: call    sub_45A500
0x4CAA83: test    al, al
0x4CAA85: jz      short loc_4CAA8B
0x4CAA87: test    esi, esi
0x4CAA89: jnz     short loc_4CAA98
0x4CAA8B: push    esi
0x4CAA8C: lea     ecx, [edi+28h]
0x4CAA8F: call    ExtraDataList?_SetDetachTime
0x4CAA94: test    esi, esi
0x4CAA96: jz      short loc_4CAAAC
0x4CAA98: mov     edx, [edi]
0x4CAA9A: mov     eax, [edx+40h]
0x4CAA9D: push    8000000h
0x4CAAA2: mov     ecx, edi
0x4CAAA4: call    eax
0x4CAAA6: pop     edi
0x4CAAA7: pop     esi
0x4CAAA8: add     esp, 0Ch
0x4CAAAB: retn
0x4CAAAC: mov     edx, [edi]
0x4CAAAE: mov     eax, [edx+44h]
0x4CAAB1: push    0E000000h
0x4CAAB6: mov     ecx, edi
0x4CAAB8: call    eax
0x4CAABA: pop     edi
0x4CAABB: pop     esi
0x4CAABC: add     esp, 0Ch
0x4CAABF: retn
