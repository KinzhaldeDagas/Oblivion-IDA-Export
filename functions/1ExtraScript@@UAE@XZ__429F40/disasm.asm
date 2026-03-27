0x429F40: push    0FFFFFFFFh
0x429F42: push    offset ??1ExtraSound@@UAE@XZ_SEH
0x429F47: mov     eax, large fs:0
0x429F4D: push    eax
0x429F4E: push    ecx
0x429F4F: push    esi
0x429F50: push    edi
0x429F51: mov     eax, ___security_cookie
0x429F56: xor     eax, esp
0x429F58: push    eax
0x429F59: lea     eax, [esp+1Ch+var_C]
0x429F5D: mov     large fs:0, eax
0x429F63: mov     esi, ecx
0x429F65: mov     [esp+1Ch+var_10], esi
0x429F69: mov     dword ptr [esi], offset ??_7ExtraScript@@6B@; const ExtraScript::`vftable'
0x429F6F: mov     edi, [esi+10h]
0x429F72: test    edi, edi
0x429F74: mov     [esp+1Ch+var_4], 0
0x429F7C: jz      short loc_429F8E
0x429F7E: mov     ecx, edi
0x429F80: call    ScriptEventList_destr??
0x429F85: push    edi
0x429F86: call    FormHeapFree
0x429F8B: add     esp, 4
0x429F8E: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x429F94: mov     dword ptr [esi+10h], 0
0x429F9B: mov     ecx, [esp+1Ch+var_C]
0x429F9F: mov     large fs:0, ecx
0x429FA6: pop     ecx
0x429FA7: pop     edi
0x429FA8: pop     esi
0x429FA9: add     esp, 10h
0x429FAC: retn
