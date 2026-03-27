0x71FBE0: push    0FFFFFFFFh
0x71FBE2: push    offset ??1NiTriShapeDynamicData@@UAE@XZ_SEH
0x71FBE7: mov     eax, large fs:0
0x71FBED: push    eax
0x71FBEE: push    ecx
0x71FBEF: push    esi
0x71FBF0: push    edi
0x71FBF1: mov     eax, ds:0B30AACh
0x71FBF6: xor     eax, esp
0x71FBF8: push    eax
0x71FBF9: lea     eax, [esp+1Ch+var_C]
0x71FBFD: mov     large fs:0, eax
0x71FC03: mov     edi, ecx
0x71FC05: mov     [esp+1Ch+var_10], edi
0x71FC09: mov     dword ptr [edi], offset ??_7NiTriShapeData@@6B@; const NiTriShapeData::`vftable'
0x71FC0F: mov     eax, [edi+48h]
0x71FC12: test    eax, eax
0x71FC14: mov     [esp+1Ch+var_4], 0
0x71FC1C: jz      short loc_71FC27
0x71FC1E: push    eax
0x71FC1F: call    FormHeapFree
0x71FC24: add     esp, 4
0x71FC27: mov     esi, [edi+54h]
0x71FC2A: test    esi, esi
0x71FC2C: jz      short loc_71FC50
0x71FC2E: mov     eax, [esi]
0x71FC30: push    eax
0x71FC31: call    FormHeapFree
0x71FC36: mov     ecx, [esi+10h]
0x71FC39: add     esp, 4
0x71FC3C: test    ecx, ecx
0x71FC3E: jz      short loc_71FC47
0x71FC40: push    1
0x71FC42: call    sub_71FB00
0x71FC47: push    esi
0x71FC48: call    FormHeapFree
0x71FC4D: add     esp, 4
0x71FC50: mov     eax, [edi+4Ch]
0x71FC53: push    eax
0x71FC54: call    FormHeapFree
0x71FC59: add     esp, 4
0x71FC5C: mov     ecx, edi
0x71FC5E: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x71FC66: call    sub_732DF0
0x71FC6B: mov     ecx, [esp+1Ch+var_C]
0x71FC6F: mov     large fs:0, ecx
0x71FC76: pop     ecx
0x71FC77: pop     edi
0x71FC78: pop     esi
0x71FC79: add     esp, 10h
0x71FC7C: retn
