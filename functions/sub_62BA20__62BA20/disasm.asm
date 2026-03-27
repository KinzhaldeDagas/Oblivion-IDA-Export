0x62BA20: sub     esp, 50h
0x62BA23: push    ebx
0x62BA24: push    ebp
0x62BA25: push    esi
0x62BA26: mov     esi, ecx
0x62BA28: mov     eax, [esi]
0x62BA2A: mov     edx, [eax+184h]
0x62BA30: push    edi
0x62BA31: call    edx
0x62BA33: mov     edi, [esp+60h+arg_0]
0x62BA37: mov     ebx, eax
0x62BA39: mov     ecx, edi
0x62BA3B: mov     [esp+60h+var_48], ebx
0x62BA3F: call    sub_5E6780
0x62BA44: mov     ebp, eax
0x62BA46: test    ebp, ebp
0x62BA48: mov     dword ptr [esp+60h+var_50], ebp
0x62BA4C: jnz     loc_62BAFE
0x62BA52: mov     ecx, [esi+2Ch]
0x62BA55: test    ecx, ecx
0x62BA57: jz      short loc_62BA79
0x62BA59: mov     eax, [ecx]
0x62BA5B: mov     edx, [eax+190h]
0x62BA61: call    edx
0x62BA63: test    al, al
0x62BA65: jnz     short loc_62BAE0
0x62BA67: mov     eax, [esi+2Ch]
0x62BA6A: mov     eax, [eax+0Ch]
0x62BA6D: push    eax
0x62BA6E: mov     ecx, edi
0x62BA70: call    sub_4D88C0
0x62BA75: test    al, al
0x62BA77: jnz     short loc_62BAE0
0x62BA79: mov     edx, [esi]
0x62BA7B: mov     eax, [edx+558h]
0x62BA81: push    edi
0x62BA82: mov     ecx, esi
0x62BA84: call    eax
0x62BA86: mov     ecx, [esi+2Ch]
0x62BA89: test    ecx, ecx
0x62BA8B: jz      short loc_62BAAD
0x62BA8D: mov     edx, [ecx]
0x62BA8F: mov     eax, [edx+190h]
0x62BA95: call    eax
0x62BA97: test    al, al
0x62BA99: jnz     short loc_62BAE0
0x62BA9B: mov     ecx, [esi+2Ch]
0x62BA9E: mov     eax, [ecx+0Ch]
0x62BAA1: push    eax
0x62BAA2: mov     ecx, edi
0x62BAA4: call    sub_4D88C0
0x62BAA9: test    al, al
0x62BAAB: jnz     short loc_62BAE0
0x62BAAD: mov     edx, [esi]
0x62BAAF: mov     eax, [edx+188h]
0x62BAB5: push    1
0x62BAB7: push    edi
0x62BAB8: mov     ecx, esi
0x62BABA: call    eax
0x62BABC: cmp     byte ptr [esi+0D0h], 0
0x62BAC3: jnz     loc_62C606
0x62BAC9: mov     edx, [esi]
0x62BACB: mov     eax, [edx+194h]
0x62BAD1: push    edi
0x62BAD2: mov     ecx, esi
0x62BAD4: call    eax
0x62BAD6: pop     edi
0x62BAD7: pop     esi
0x62BAD8: pop     ebp
0x62BAD9: pop     ebx
0x62BADA: add     esp, 50h
0x62BADD: retn    4
0x62BAE0: mov     eax, [esi+44h]
0x62BAE3: test    eax, eax
0x62BAE5: jz      short loc_62BAFE
0x62BAE7: cmp     [eax], edi
0x62BAE9: jnz     short loc_62BAFE
0x62BAEB: mov     ecx, [eax+4]
0x62BAEE: push    0
0x62BAF0: push    ecx
0x62BAF1: mov     ecx, edi
0x62BAF3: call    sub_4D8D70
0x62BAF8: mov     ebp, eax
0x62BAFA: mov     dword ptr [esp+60h+var_50], eax
0x62BAFE: mov     ecx, [esi+2Ch]
0x62BB01: test    ecx, ecx
0x62BB03: mov     byte ptr [esp+60h+arg_0], 0
0x62BB08: jz      short loc_62BB75
0x62BB0A: mov     edx, [ecx]
0x62BB0C: mov     eax, [edx+190h]
0x62BB12: call    eax
0x62BB14: test    al, al
0x62BB16: jz      short loc_62BB75
0x62BB18: mov     eax, [esi+2Ch]
0x62BB1B: cmp     eax, edi
0x62BB1D: jz      short loc_62BB75
0x62BB1F: cmp     eax, ds:0B333C4h
0x62BB25: mov     ecx, [eax+58h]
0x62BB28: mov     ecx, [ecx+8]
0x62BB2B: mov     byte ptr [esp+60h+arg_0], 1
0x62BB30: jz      short loc_62BB75
0x62BB32: test    ecx, ecx
0x62BB34: jz      short loc_62BB45
0x62BB36: cmp     byte ptr [ecx+20h], 1
0x62BB3A: jz      short loc_62BB75
0x62BB3C: call    sub_5660A0
0x62BB41: test    al, al
0x62BB43: jnz     short loc_62BB75
0x62BB45: mov     edx, [esi]
0x62BB47: mov     eax, [edx+17Ch]
0x62BB4D: push    0
0x62BB4F: mov     ecx, esi
0x62BB51: call    eax
0x62BB53: test    ebp, ebp
0x62BB55: jz      loc_62C606
0x62BB5B: mov     ecx, ebp
0x62BB5D: call    ContainerEntryExtraData_DestroyDataTable
0x62BB62: push    ebp
0x62BB63: call    FormHeapFree
0x62BB68: add     esp, 4
0x62BB6B: pop     edi
0x62BB6C: pop     esi
0x62BB6D: pop     ebp
0x62BB6E: pop     ebx
0x62BB6F: add     esp, 50h
0x62BB72: retn    4
0x62BB75: mov     edx, [edi]
0x62BB77: mov     eax, [edx+174h]
0x62BB7D: mov     ecx, edi
0x62BB7F: call    eax
0x62BB81: cmp     byte ptr [esp+60h+arg_0], 0
0x62BB86: mov     ecx, [eax]
0x62BB88: mov     edx, [eax+4]
0x62BB8B: mov     eax, [eax+8]
0x62BB8E: mov     [esp+60h+var_24], ecx
0x62BB92: mov     [esp+60h+var_20], edx
0x62BB96: mov     [esp+60h+var_1C], eax
0x62BB9A: jz      short loc_62BBEC
0x62BB9C: mov     ecx, [esi+2Ch]
0x62BB9F: mov     edx, [ecx]
0x62BBA1: mov     eax, [edx+174h]
0x62BBA7: call    eax
0x62BBA9: mov     edx, [edi]
0x62BBAB: mov     ebp, eax
0x62BBAD: mov     eax, [edx+174h]
0x62BBB3: mov     ecx, edi
0x62BBB5: call    eax
0x62BBB7: fld     dword ptr [eax]
0x62BBB9: fsub    dword ptr [ebp+0]
0x62BBBC: fstp    dword ptr [esp+60h+var_30]
0x62BBC0: mov     ecx, dword ptr [esp+60h+var_30]
0x62BBC4: fld     dword ptr [eax+4]
0x62BBC7: mov     [esp+60h+var_24], ecx
0x62BBCB: fsub    dword ptr [ebp+4]
0x62BBCE: fstp    dword ptr [esp+60h+var_30+4]
0x62BBD2: mov     edx, dword ptr [esp+60h+var_30+4]
0x62BBD6: fld     dword ptr [eax+8]
0x62BBD9: mov     [esp+60h+var_20], edx
0x62BBDD: fsub    dword ptr [ebp+8]
0x62BBE0: fstp    [esp+60h+var_28]
0x62BBE4: mov     eax, [esp+60h+var_28]
0x62BBE8: mov     [esp+60h+var_1C], eax
0x62BBEC: fldz
0x62BBEE: xor     ebp, ebp
0x62BBF0: cmp     byte ptr [esp+60h+arg_0], 0
0x62BBF5: fstp    [esp+60h+var_44]
0x62BBF9: jz      loc_62BD64
0x62BBFF: mov     ebp, [esi+2Ch]
0x62BC02: mov     ecx, [ebx+28h]
0x62BC05: mov     dword ptr [esp+60h+var_40], ebp
0x62BC09: call    sub_452A60
0x62BC0E: test    eax, eax
0x62BC10: mov     [esp+60h+var_44], eax
0x62BC14: jg      short loc_62BC1E
0x62BC16: mov     [esp+60h+var_44], 0C8h ; 'È'
0x62BC1E: mov     ecx, [esi+2Ch]
0x62BC21: cmp     ecx, ds:0B333C4h
0x62BC27: jnz     short loc_62BC2F
0x62BC29: fild    [esp+60h+var_44]
0x62BC2D: jmp     short loc_62BC53
0x62BC2F: mov     ecx, edi; this
0x62BC31: call    TESObjectREFR_GetParentCell
0x62BC36: mov     ecx, eax; this
0x62BC38: call    TESObjectCELL_IsInterior
0x62BC3D: test    al, al
0x62BC3F: jz      short loc_62BC49
0x62BC41: fld     dword ptr ds:0B36AA0h
0x62BC47: jmp     short loc_62BC53
0x62BC49: fild    [esp+60h+var_44]
0x62BC4D: fmul    dword ptr ds:0B36A98h
0x62BC53: mov     ecx, [edi+58h]
0x62BC56: fstp    [esp+60h+var_44]
0x62BC5A: mov     edx, [ecx]
0x62BC5C: mov     eax, [edx+40Ch]
0x62BC62: call    eax
0x62BC64: test    eax, eax
0x62BC66: jz      loc_62BD64
0x62BC6C: mov     ecx, [edi+58h]
0x62BC6F: mov     edx, [ecx]
0x62BC71: mov     eax, [edx+40Ch]
0x62BC77: call    eax
0x62BC79: mov     edx, [eax]
0x62BC7B: mov     ecx, eax
0x62BC7D: mov     eax, [edx+4]
0x62BC80: call    eax
0x62BC82: cmp     eax, 2
0x62BC85: jnz     loc_62BD64
0x62BC8B: mov     ecx, [edi+58h]
0x62BC8E: mov     edx, [ecx]
0x62BC90: mov     eax, [edx+40Ch]
0x62BC96: call    eax
0x62BC98: mov     ebp, eax
0x62BC9A: test    ebp, ebp
0x62BC9C: jz      loc_62BD60
0x62BCA2: mov     ecx, ebp
0x62BCA4: call    sub_68A1B0
0x62BCA9: test    eax, eax
0x62BCAB: jz      short loc_62BCBB
0x62BCAD: mov     edx, [eax]
0x62BCAF: mov     ecx, eax
0x62BCB1: mov     eax, [edx+174h]
0x62BCB7: call    eax
0x62BCB9: jmp     short loc_62BCC2
0x62BCBB: mov     ecx, ebp
0x62BCBD: call    sub_68A160
0x62BCC2: mov     edx, [eax+4]
0x62BCC5: mov     ecx, [eax]
0x62BCC7: mov     eax, [eax+8]
0x62BCCA: mov     dword ptr [esp+60h+var_30+4], edx
0x62BCCE: mov     edx, [edi]
0x62BCD0: mov     [esp+60h+var_28], eax
0x62BCD4: mov     eax, [edx+174h]
0x62BCDA: mov     dword ptr [esp+60h+var_30], ecx
0x62BCDE: mov     ecx, edi
0x62BCE0: call    eax
0x62BCE2: fld     dword ptr [eax]
0x62BCE4: fsub    dword ptr [esp+60h+var_30]
0x62BCE8: fstp    [esp+60h+var_18]
0x62BCEC: mov     ecx, [esp+60h+var_18]
0x62BCF0: fld     dword ptr [eax+4]
0x62BCF3: mov     [esp+60h+var_C], ecx
0x62BCF7: fsub    dword ptr [esp+60h+var_30+4]
0x62BCFB: mov     ecx, dword ptr [esp+60h+var_40]
0x62BCFF: fstp    [esp+60h+var_14]
0x62BD03: mov     edx, [esp+60h+var_14]
0x62BD07: fld     dword ptr [eax+8]
0x62BD0A: mov     [esp+60h+var_8], edx
0x62BD0E: fsub    [esp+60h+var_28]
0x62BD12: mov     edx, [ecx]
0x62BD14: fstp    [esp+60h+var_10]
0x62BD18: mov     eax, [esp+60h+var_10]
0x62BD1C: mov     [esp+60h+var_4], eax
0x62BD20: mov     eax, [edx+174h]
0x62BD26: call    eax
0x62BD28: fld     dword ptr [eax]
0x62BD2A: fsub    dword ptr [esp+60h+var_30]
0x62BD2E: fstp    [esp+60h+var_18]
0x62BD32: mov     ecx, [esp+60h+var_18]
0x62BD36: fld     dword ptr [eax+4]
0x62BD39: mov     dword ptr [esp+60h+var_30], ecx
0x62BD3D: fsub    dword ptr [esp+60h+var_30+4]
0x62BD41: fstp    [esp+60h+var_14]
0x62BD45: mov     edx, [esp+60h+var_14]
0x62BD49: fld     dword ptr [eax+8]
0x62BD4C: mov     dword ptr [esp+60h+var_30+4], edx
0x62BD50: fsub    [esp+60h+var_28]
0x62BD54: fstp    [esp+60h+var_10]
0x62BD58: mov     eax, [esp+60h+var_10]
0x62BD5C: mov     [esp+60h+var_28], eax
0x62BD60: mov     ebp, dword ptr [esp+60h+var_40]
0x62BD64: cmp     dword ptr [ebx+24h], 0
0x62BD68: jz      loc_62C3C6
0x62BD6E: fld     dword ptr ds:0A30634h
0x62BD74: push    ecx
0x62BD75: fstp    [esp+64h+var_64]; float
0x62BD78: push    0; char
0x62BD7A: push    edi; int
0x62BD7B: mov     ecx, ebx
0x62BD7D: call    sub_566DC0
0x62BD82: test    al, al
0x62BD84: jz      loc_62C3C6
0x62BD8A: cmp     byte ptr [esp+60h+arg_0], 0
0x62BD8F: jnz     loc_62C2AC
0x62BD95: mov     edx, [edi]
0x62BD97: mov     eax, [edx+164h]
0x62BD9D: mov     ecx, edi
0x62BD9F: call    eax
0x62BDA1: test    eax, eax
0x62BDA3: jz      short loc_62BDD6
0x62BDA5: mov     ecx, eax
0x62BDA7: call    sub_472EA0
0x62BDAC: test    al, al
0x62BDAE: jnz     short loc_62BDD6
0x62BDB0: mov     esi, dword ptr [esp+60h+var_50]
0x62BDB4: test    esi, esi
0x62BDB6: jz      loc_62C606
0x62BDBC: mov     ecx, esi
0x62BDBE: call    ContainerEntryExtraData_DestroyDataTable
0x62BDC3: push    esi
0x62BDC4: call    FormHeapFree
0x62BDC9: add     esp, 4
0x62BDCC: pop     edi
0x62BDCD: pop     esi
0x62BDCE: pop     ebp
0x62BDCF: pop     ebx
0x62BDD0: add     esp, 50h
0x62BDD3: retn    4
0x62BDD6: mov     eax, dword ptr [esp+60h+var_50]
0x62BDDA: test    eax, eax
0x62BDDC: mov     ebp, [ebx+24h]
0x62BDDF: mov     ecx, [ebx+28h]
0x62BDE2: mov     [esp+60h+var_34], ebp
0x62BDE6: mov     [esp+60h+var_38], ecx
0x62BDEA: jz      loc_62C279
0x62BDF0: mov     eax, [eax]
0x62BDF2: xor     ebx, ebx
0x62BDF4: test    eax, eax
0x62BDF6: mov     [esp+60h+arg_0], ebx
0x62BDFA: jz      short loc_62BE02
0x62BDFC: mov     ebx, [eax]
0x62BDFE: mov     [esp+60h+arg_0], ebx
0x62BE02: test    ebx, ebx
0x62BE04: mov     dword ptr [esp+60h+var_40], 0
0x62BE0C: jz      short loc_62BE27
0x62BE0E: mov     ecx, ebx
0x62BE10: call    ExtraDataList_GetReferencePointer
0x62BE15: test    eax, eax
0x62BE17: jz      short loc_62BE27
0x62BE19: mov     ecx, ebx
0x62BE1B: call    ExtraDataList_GetReferencePointer
0x62BE20: mov     edx, [eax+0Ch]
0x62BE23: mov     dword ptr [esp+60h+var_40], edx
0x62BE27: mov     eax, [esp+60h+var_48]
0x62BE2B: mov     ecx, [eax+24h]
0x62BE2E: call    sub_5697E0
0x62BE33: mov     ebx, eax
0x62BE35: test    ebx, ebx
0x62BE37: mov     [esp+60h+var_44], eax
0x62BE3B: jnz     short loc_62BE4C
0x62BE3D: mov     ebx, [esi+30h]
0x62BE40: test    ebx, ebx
0x62BE42: mov     [esp+60h+var_44], ebx
0x62BE46: jz      loc_62BED1
0x62BE4C: mov     ecx, ebx; this
0x62BE4E: call    TESObjectREFR_GetContainer
0x62BE53: test    eax, eax
0x62BE55: jz      short loc_62BED1
0x62BE57: cmp     byte ptr [esi+25Dh], 0
0x62BE5E: jnz     short loc_62BE86
0x62BE60: mov     byte ptr [esi+25Dh], 1
0x62BE67: mov     edx, [ebx]
0x62BE69: mov     eax, [edx+170h]
0x62BE6F: push    ebx
0x62BE70: mov     ecx, ebx
0x62BE72: call    eax
0x62BE74: push    eax
0x62BE75: push    edi
0x62BE76: mov     ecx, esi
0x62BE78: call    sub_6286E0
0x62BE7D: mov     esi, dword ptr [esp+60h+var_50]
0x62BE81: jmp     loc_62BDBC
0x62BE86: mov     edx, [edi]
0x62BE88: mov     eax, [edx+164h]
0x62BE8E: mov     ecx, edi
0x62BE90: call    eax
0x62BE92: test    eax, eax
0x62BE94: jz      short loc_62BEA1
0x62BE96: mov     ecx, eax
0x62BE98: call    sub_472EA0
0x62BE9D: test    al, al
0x62BE9F: jz      short loc_62BE7D
0x62BEA1: mov     eax, dword ptr [esp+60h+var_40]
0x62BEA5: mov     ecx, [esp+60h+var_48]
0x62BEA9: mov     edx, dword ptr [esp+60h+var_50]
0x62BEAD: mov     ecx, [ecx+28h]
0x62BEB0: mov     ebp, [edx+8]
0x62BEB3: push    eax
0x62BEB4: call    sub_452A60
0x62BEB9: mov     ecx, [esp+64h+arg_0]
0x62BEBD: push    eax
0x62BEBE: push    ebx
0x62BEBF: push    ecx
0x62BEC0: push    ebp
0x62BEC1: mov     ecx, edi
0x62BEC3: call    sub_5FC6D0
0x62BEC8: mov     ebp, dword ptr [esp+60h+var_50]
0x62BECC: jmp     loc_62C00A
0x62BED1: mov     edx, dword ptr [esp+60h+var_50]
0x62BED5: mov     eax, [edx]
0x62BED7: test    eax, eax
0x62BED9: jz      short loc_62BEE1
0x62BEDB: mov     eax, [eax]
0x62BEDD: mov     [esp+60h+arg_0], eax
0x62BEE1: xor     ebx, ebx
0x62BEE3: test    ebp, ebp
0x62BEE5: jz      loc_62BF72
0x62BEEB: mov     ecx, ebp
0x62BEED: call    sub_5697E0
0x62BEF2: mov     ebp, eax
0x62BEF4: test    ebp, ebp
0x62BEF6: jnz     short loc_62BEFF
0x62BEF8: mov     ebp, [esi+30h]
0x62BEFB: test    ebp, ebp
0x62BEFD: jz      short loc_62BF72
0x62BEFF: mov     edx, [ebp+0]
0x62BF02: mov     eax, [edx+170h]
0x62BF08: mov     ecx, ebp
0x62BF0A: call    eax
0x62BF0C: cmp     eax, ds:0B35EACh
0x62BF12: jz      short loc_62BF29
0x62BF14: mov     edx, [ebp+0]
0x62BF17: mov     eax, [edx+170h]
0x62BF1D: mov     ecx, ebp
0x62BF1F: call    eax
0x62BF21: cmp     eax, ds:0B35EB0h
0x62BF27: jnz     short loc_62BF72
0x62BF29: mov     edx, [ebp+0]
0x62BF2C: mov     eax, [edx+174h]
0x62BF32: mov     ecx, ebp
0x62BF34: call    eax
0x62BF36: mov     ecx, [eax]
0x62BF38: mov     edx, [eax+4]
0x62BF3B: mov     eax, [eax+8]
0x62BF3E: push    0Ch; Size
0x62BF40: mov     [esp+64h+var_18], ecx
0x62BF44: mov     [esp+64h+var_14], edx
0x62BF48: mov     [esp+64h+var_10], eax
0x62BF4C: call    FormHeapAlloc
0x62BF51: add     esp, 4
0x62BF54: test    eax, eax
0x62BF56: jz      short loc_62BF6E
0x62BF58: fld     [esp+60h+var_18]
0x62BF5C: fstp    dword ptr [eax]
0x62BF5E: fld     [esp+60h+var_14]
0x62BF62: fstp    dword ptr [eax+4]
0x62BF65: fld     [esp+60h+var_10]
0x62BF69: fstp    dword ptr [eax+8]
0x62BF6C: jmp     short loc_62BF70
0x62BF6E: xor     eax, eax
0x62BF70: mov     ebx, eax
0x62BF72: mov     ecx, [esp+60h+var_38]
0x62BF76: mov     ebp, 1
0x62BF7B: call    sub_569E60
0x62BF80: test    eax, eax
0x62BF82: jnz     short loc_62BF92
0x62BF84: mov     ecx, [esp+60h+var_48]
0x62BF88: mov     ecx, [ecx+28h]
0x62BF8B: call    sub_452A60
0x62BF90: mov     ebp, eax
0x62BF92: cmp     byte ptr [esi+25Dh], 0
0x62BF99: jnz     short loc_62BFCE
0x62BF9B: mov     ebx, dword ptr [esp+60h+var_50]
0x62BF9F: mov     byte ptr [esi+25Dh], 1
0x62BFA6: mov     edx, [ebx+8]
0x62BFA9: push    0
0x62BFAB: push    edx
0x62BFAC: push    edi
0x62BFAD: mov     ecx, esi
0x62BFAF: call    sub_6286E0
0x62BFB4: mov     ecx, ebx
0x62BFB6: call    ContainerEntryExtraData_DestroyDataTable
0x62BFBB: push    ebx
0x62BFBC: call    FormHeapFree
0x62BFC1: add     esp, 4
0x62BFC4: pop     edi
0x62BFC5: pop     esi
0x62BFC6: pop     ebp
0x62BFC7: pop     ebx
0x62BFC8: add     esp, 50h
0x62BFCB: retn    4
0x62BFCE: mov     eax, [edi]
0x62BFD0: mov     edx, [eax+164h]
0x62BFD6: mov     ecx, edi
0x62BFD8: call    edx
0x62BFDA: test    eax, eax
0x62BFDC: jz      short loc_62BFED
0x62BFDE: mov     ecx, eax
0x62BFE0: call    sub_472EA0
0x62BFE5: test    al, al
0x62BFE7: jz      loc_62BE7D
0x62BFED: mov     ecx, [esp+60h+arg_0]
0x62BFF1: mov     eax, [edi]
0x62BFF3: mov     eax, [eax+2C8h]
0x62BFF9: push    0
0x62BFFB: push    ebx
0x62BFFC: push    ebp
0x62BFFD: mov     ebp, dword ptr [esp+6Ch+var_50]
0x62C001: mov     edx, [ebp+8]
0x62C004: push    ecx
0x62C005: push    edx
0x62C006: mov     ecx, edi
0x62C008: call    eax
0x62C00A: mov     ecx, ebp
0x62C00C: mov     byte ptr [esi+25Dh], 0
0x62C013: call    ContainerEntryExtraData_DestroyDataTable
0x62C018: push    ebp
0x62C019: call    FormHeapFree
0x62C01E: mov     ebx, [esp+64h+var_38]
0x62C022: add     esp, 4
0x62C025: mov     ecx, ebx
0x62C027: call    sub_569E80
0x62C02C: cmp     eax, 0Dh
0x62C02F: jz      short loc_62C051
0x62C031: mov     ecx, ebx
0x62C033: call    sub_569E80
0x62C038: cmp     eax, 15h
0x62C03B: jl      loc_62C26B
0x62C041: mov     ecx, ebx
0x62C043: call    sub_569E80
0x62C048: cmp     eax, 19h
0x62C04B: jg      loc_62C26B
0x62C051: cmp     dword ptr [esi+40h], 0
0x62C055: jnz     short loc_62C061
0x62C057: cmp     dword ptr [esi+3Ch], 0
0x62C05B: jz      loc_62C1DC
0x62C061: mov     eax, [esi+3Ch]
0x62C064: lea     ecx, [esi+3Ch]
0x62C067: push    eax
0x62C068: mov     [esi+44h], eax
0x62C06B: call    BSSimpleList_Remove
0x62C070: mov     eax, [esi+44h]
0x62C073: mov     ecx, [eax]
0x62C075: mov     edx, [esi]
0x62C077: mov     edx, [edx+0D0h]
0x62C07D: push    ecx
0x62C07E: mov     ecx, esi
0x62C080: call    edx
0x62C082: mov     eax, [esi+44h]
0x62C085: mov     ecx, [eax+4]
0x62C088: xor     ebp, ebp
0x62C08A: push    ebp
0x62C08B: push    ecx
0x62C08C: mov     ecx, edi
0x62C08E: call    sub_4D8D70
0x62C093: mov     ebx, eax
0x62C095: mov     eax, [esi+44h]
0x62C098: cmp     eax, ebp
0x62C09A: jz      short loc_62C0A5
0x62C09C: push    eax
0x62C09D: call    FormHeapFree
0x62C0A2: add     esp, 4
0x62C0A5: mov     ecx, [esp+60h+var_44]; this
0x62C0A9: cmp     ecx, ebp
0x62C0AB: mov     [esi+44h], ebp
0x62C0AE: jz      short loc_62C0E5
0x62C0B0: call    TESObjectREFR_GetContainer
0x62C0B5: test    eax, eax
0x62C0B7: jz      short loc_62C0E5
0x62C0B9: mov     edx, [esp+60h+var_48]
0x62C0BD: mov     eax, dword ptr [esp+60h+var_40]
0x62C0C1: mov     ecx, [edx+28h]
0x62C0C4: mov     ebp, [ebx+8]
0x62C0C7: push    eax
0x62C0C8: call    sub_452A60
0x62C0CD: mov     ecx, [esp+64h+var_44]
0x62C0D1: mov     edx, [esp+64h+arg_0]
0x62C0D5: push    eax
0x62C0D6: push    ecx
0x62C0D7: push    edx
0x62C0D8: push    ebp
0x62C0D9: mov     ecx, edi
0x62C0DB: call    sub_5FC6D0
0x62C0E0: jmp     loc_62C1C7
0x62C0E5: mov     eax, [ebx]
0x62C0E7: cmp     eax, ebp
0x62C0E9: jz      short loc_62C0F1
0x62C0EB: mov     eax, [eax]
0x62C0ED: mov     [esp+60h+arg_0], eax
0x62C0F1: cmp     [esp+60h+var_34], ebp
0x62C0F5: mov     dword ptr [esp+60h+var_50], ebp
0x62C0F9: jz      loc_62C18A
0x62C0FF: mov     ecx, [esp+60h+var_34]
0x62C103: call    sub_5697E0
0x62C108: mov     ebp, eax
0x62C10A: test    ebp, ebp
0x62C10C: jnz     short loc_62C115
0x62C10E: mov     ebp, [esi+30h]
0x62C111: test    ebp, ebp
0x62C113: jz      short loc_62C18A
0x62C115: mov     edx, [ebp+0]
0x62C118: mov     eax, [edx+170h]
0x62C11E: mov     ecx, ebp
0x62C120: call    eax
0x62C122: cmp     eax, ds:0B35EACh
0x62C128: jz      short loc_62C13F
0x62C12A: mov     edx, [ebp+0]
0x62C12D: mov     eax, [edx+170h]
0x62C133: mov     ecx, ebp
0x62C135: call    eax
0x62C137: cmp     eax, ds:0B35EB0h
0x62C13D: jnz     short loc_62C18A
0x62C13F: mov     edx, [ebp+0]
0x62C142: mov     eax, [edx+174h]
0x62C148: mov     ecx, ebp
0x62C14A: call    eax
0x62C14C: mov     ecx, [eax]
0x62C14E: mov     edx, [eax+4]
0x62C151: mov     eax, [eax+8]
0x62C154: push    0Ch; Size
0x62C156: mov     [esp+64h+var_18], ecx
0x62C15A: mov     [esp+64h+var_14], edx
0x62C15E: mov     [esp+64h+var_10], eax
0x62C162: call    FormHeapAlloc
0x62C167: add     esp, 4
0x62C16A: test    eax, eax
0x62C16C: jz      short loc_62C184
0x62C16E: fld     [esp+60h+var_18]
0x62C172: fstp    dword ptr [eax]
0x62C174: fld     [esp+60h+var_14]
0x62C178: fstp    dword ptr [eax+4]
0x62C17B: fld     [esp+60h+var_10]
0x62C17F: fstp    dword ptr [eax+8]
0x62C182: jmp     short loc_62C186
0x62C184: xor     eax, eax
0x62C186: mov     dword ptr [esp+60h+var_50], eax
0x62C18A: mov     ecx, [esp+60h+var_38]
0x62C18E: mov     ebp, 1
0x62C193: call    sub_569E60
0x62C198: test    eax, eax
0x62C19A: jnz     short loc_62C1AA
0x62C19C: mov     ecx, [esp+60h+var_48]
0x62C1A0: mov     ecx, [ecx+28h]
0x62C1A3: call    sub_452A60
0x62C1A8: mov     ebp, eax
0x62C1AA: mov     eax, dword ptr [esp+60h+var_50]
0x62C1AE: mov     ecx, [esp+60h+arg_0]
0x62C1B2: mov     edx, [edi]
0x62C1B4: mov     edx, [edx+2C8h]
0x62C1BA: push    0
0x62C1BC: push    eax
0x62C1BD: mov     eax, [ebx+8]
0x62C1C0: push    ebp
0x62C1C1: push    ecx
0x62C1C2: push    eax
0x62C1C3: mov     ecx, edi
0x62C1C5: call    edx
0x62C1C7: mov     ecx, ebx
0x62C1C9: call    ContainerEntryExtraData_DestroyDataTable
0x62C1CE: push    ebx
0x62C1CF: call    FormHeapFree
0x62C1D4: add     esp, 4
0x62C1D7: jmp     loc_62C051
0x62C1DC: mov     eax, [esi+8]
0x62C1DF: test    eax, eax
0x62C1E1: mov     byte ptr [esp+60h+var_38], 1
0x62C1E6: mov     byte ptr [esp+60h+arg_0], 1
0x62C1EB: jz      short loc_62C20B
0x62C1ED: mov     eax, [eax+1Ch]
0x62C1F0: mov     ecx, eax
0x62C1F2: shr     ecx, 14h
0x62C1F5: test    cl, 1
0x62C1F8: jz      short loc_62C1FF
0x62C1FA: mov     byte ptr [esp+60h+var_38], 0
0x62C1FF: shr     eax, 15h
0x62C202: test    al, 1
0x62C204: jz      short loc_62C20B
0x62C206: mov     byte ptr [esp+60h+arg_0], 0
0x62C20B: mov     ecx, edi
0x62C20D: call    sub_5E32D0
0x62C212: test    al, al
0x62C214: mov     ecx, edi; this
0x62C216: jz      short loc_62C23E
0x62C218: mov     edx, [edi]
0x62C21A: mov     eax, [edx+170h]
0x62C220: call    eax
0x62C222: test    eax, eax
0x62C224: jz      short loc_62C26B
0x62C226: mov     ecx, [esp+60h+arg_0]
0x62C22A: mov     edx, [esp+60h+var_38]
0x62C22E: push    1; char
0x62C230: push    0; int
0x62C232: push    ecx; int
0x62C233: push    edx; int
0x62C234: push    edi; int
0x62C235: mov     ecx, eax; int
0x62C237: call    sub_5227A0
0x62C23C: jmp     short loc_62C26B
0x62C23E: call    Actor_IsCreature
0x62C243: test    al, al
0x62C245: jz      short loc_62C26B
0x62C247: mov     eax, [edi]
0x62C249: mov     edx, [eax+170h]
0x62C24F: mov     ecx, edi
0x62C251: call    edx
0x62C253: test    eax, eax
0x62C255: jz      short loc_62C26B
0x62C257: mov     ecx, [esp+60h+arg_0]
0x62C25B: mov     edx, [esp+60h+var_38]
0x62C25F: push    1
0x62C261: push    ecx
0x62C262: push    edx
0x62C263: push    edi
0x62C264: mov     ecx, eax
0x62C266: call    sub_51E240
0x62C26B: mov     eax, [esi]
0x62C26D: mov     edx, [eax+0BCh]
0x62C273: push    1
0x62C275: mov     ecx, esi
0x62C277: call    edx
0x62C279: mov     eax, [esi]
0x62C27B: mov     edx, [eax+188h]
0x62C281: push    1
0x62C283: push    edi
0x62C284: mov     ecx, esi
0x62C286: call    edx
0x62C288: cmp     byte ptr [esi+0D0h], 0
0x62C28F: jnz     loc_62C606
0x62C295: mov     eax, [esi]
0x62C297: mov     edx, [eax+194h]
0x62C29D: push    edi
0x62C29E: mov     ecx, esi
0x62C2A0: call    edx
0x62C2A2: pop     edi
0x62C2A3: pop     esi
0x62C2A4: pop     ebp
0x62C2A5: pop     ebx
0x62C2A6: add     esp, 50h
0x62C2A9: retn    4
0x62C2AC: mov     eax, [esi]
0x62C2AE: mov     edx, [eax+188h]
0x62C2B4: push    1
0x62C2B6: push    edi
0x62C2B7: mov     ecx, esi
0x62C2B9: call    edx
0x62C2BB: mov     ebp, [esi+2Ch]
0x62C2BE: mov     ecx, [ebp+58h]
0x62C2C1: mov     eax, [ecx]
0x62C2C3: mov     edx, [eax+184h]
0x62C2C9: call    edx
0x62C2CB: test    eax, eax
0x62C2CD: jz      short loc_62C288
0x62C2CF: mov     ecx, [ebp+58h]
0x62C2D2: mov     eax, [ecx]
0x62C2D4: mov     edx, [eax+188h]
0x62C2DA: push    1
0x62C2DC: push    edi
0x62C2DD: call    edx
0x62C2DF: mov     ecx, [ebp+58h]
0x62C2E2: mov     eax, [ecx]
0x62C2E4: mov     edx, [eax+184h]
0x62C2EA: call    edx
0x62C2EC: mov     ecx, eax
0x62C2EE: call    sub_5660A0
0x62C2F3: test    al, al
0x62C2F5: jz      short loc_62C288
0x62C2F7: mov     ecx, [ebp+58h]
0x62C2FA: mov     eax, [ecx]
0x62C2FC: mov     edx, [eax+184h]
0x62C302: call    edx
0x62C304: test    eax, eax
0x62C306: jz      short loc_62C313
0x62C308: mov     edx, [eax]
0x62C30A: mov     ecx, eax
0x62C30C: mov     eax, [edx+10h]
0x62C30F: push    1
0x62C311: call    eax
0x62C313: mov     ecx, [ebp+58h]
0x62C316: mov     dword ptr [ecx+8], 0
0x62C31D: mov     edx, [ebp+0]
0x62C320: mov     eax, [edx+44h]
0x62C323: push    30000h
0x62C328: mov     ecx, ebp
0x62C32A: call    eax
0x62C32C: mov     ecx, ebp
0x62C32E: call    sub_5E05B0
0x62C333: test    al, al
0x62C335: jz      short loc_62C33E
0x62C337: mov     ecx, ebp
0x62C339: call    sub_5E02B0
0x62C33E: mov     edx, [esi]
0x62C340: mov     eax, [edx+0BCh]
0x62C346: push    1
0x62C348: mov     ecx, esi
0x62C34A: call    eax
0x62C34C: mov     edx, [esi]
0x62C34E: mov     eax, [edx+18h]
0x62C351: push    0
0x62C353: push    edi
0x62C354: mov     ecx, esi
0x62C356: call    eax
0x62C358: mov     edx, [edi]
0x62C35A: mov     eax, [edx+380h]
0x62C360: mov     ecx, edi
0x62C362: call    eax
0x62C364: test    eax, eax
0x62C366: jz      loc_62C606
0x62C36C: mov     ecx, [esi+8]
0x62C36F: mov     edx, [ecx+1Ch]
0x62C372: shr     edx, 17h
0x62C375: test    dl, 1
0x62C378: jnz     loc_62C606
0x62C37E: mov     eax, [edi]
0x62C380: mov     edx, [eax+380h]
0x62C386: mov     ecx, edi
0x62C388: call    edx
0x62C38A: mov     ecx, eax
0x62C38C: call    sub_5E9A60
0x62C391: test    al, al
0x62C393: jnz     short loc_62C3B0
0x62C395: mov     eax, [edi]
0x62C397: mov     edx, [eax+380h]
0x62C39D: mov     ecx, edi
0x62C39F: call    edx
0x62C3A1: mov     ecx, eax; int
0x62C3A3: call    sub_5F80D0
0x62C3A8: fldz
0x62C3AA: fstp    dword ptr [esi+1A8h]
0x62C3B0: mov     eax, [edi]
0x62C3B2: mov     edx, [eax+230h]
0x62C3B8: mov     ecx, edi
0x62C3BA: call    edx
0x62C3BC: pop     edi
0x62C3BD: pop     esi
0x62C3BE: pop     ebp
0x62C3BF: pop     ebx
0x62C3C0: add     esp, 50h
0x62C3C3: retn    4
0x62C3C6: cmp     byte ptr [esp+60h+arg_0], 0
0x62C3CB: jz      loc_62C4FF
0x62C3D1: fld     [esp+60h+var_20]
0x62C3D5: fld     [esp+60h+var_24]
0x62C3D9: fld     [esp+60h+var_1C]
0x62C3DD: fld     st(1)
0x62C3DF: fmulp   st(2), st
0x62C3E1: fld     st(2)
0x62C3E3: fmulp   st(3), st
0x62C3E5: fxch    st(1)
0x62C3E7: faddp   st(2), st
0x62C3E9: fmul    st, st
0x62C3EB: faddp   st(1), st
0x62C3ED: fstp    [esp+60h+var_34]
0x62C3F1: fld     [esp+60h+var_34]
0x62C3F5: call    __CIsqrt
0x62C3FA: fstp    [esp+60h+var_34]
0x62C3FE: fld     [esp+60h+var_34]
0x62C402: fld     [esp+60h+var_44]
0x62C406: fcompp
0x62C408: fnstsw  ax
0x62C40A: test    ah, 5
0x62C40D: jp      loc_62C498
0x62C413: fld     [esp+60h+var_8]
0x62C417: fld     [esp+60h+var_C]
0x62C41B: fld     [esp+60h+var_4]
0x62C41F: fld     dword ptr [esp+60h+var_30+4]
0x62C423: fstp    [esp+60h+var_50]
0x62C427: fld     dword ptr [esp+60h+var_30]
0x62C42B: fstp    [esp+60h+var_40]
0x62C42F: fld     [esp+60h+var_28]
0x62C433: fstp    [esp+60h+var_30]
0x62C437: fld     st(1)
0x62C439: fmulp   st(2), st
0x62C43B: fld     st(2)
0x62C43D: fmulp   st(3), st
0x62C43F: fxch    st(1)
0x62C441: faddp   st(2), st
0x62C443: fmul    st, st
0x62C445: faddp   st(1), st
0x62C447: fstp    [esp+60h+var_34]
0x62C44B: fld     [esp+60h+var_34]
0x62C44F: call    __CIsqrt
0x62C454: fstp    [esp+60h+var_34]
0x62C458: fld     [esp+60h+var_34]
0x62C45C: fstp    [esp+60h+var_38]
0x62C460: fld     [esp+60h+var_40]
0x62C464: fmul    st, st
0x62C466: fld     [esp+60h+var_50]
0x62C46A: fmul    st, st
0x62C46C: faddp   st(1), st
0x62C46E: fld     [esp+60h+var_30]
0x62C472: fmul    st, st
0x62C474: faddp   st(1), st
0x62C476: fstp    [esp+60h+var_34]
0x62C47A: fld     [esp+60h+var_34]
0x62C47E: call    __CIsqrt
0x62C483: fstp    [esp+60h+var_34]
0x62C487: fld     [esp+60h+var_34]
0x62C48B: fld     [esp+60h+var_38]
0x62C48F: fcompp
0x62C491: fnstsw  ax
0x62C493: test    ah, 41h
0x62C496: jnp     short loc_62C4BD
0x62C498: cmp     ebp, ds:0B333C4h
0x62C49E: jz      short loc_62C4FF
0x62C4A0: mov     ecx, ebp
0x62C4A2: call    sub_5E0380
0x62C4A7: test    eax, eax
0x62C4A9: jz      short loc_62C4FF
0x62C4AB: mov     ecx, ebp
0x62C4AD: call    sub_5E0380
0x62C4B2: mov     ecx, eax
0x62C4B4: call    sub_567770
0x62C4B9: test    al, al
0x62C4BB: jz      short loc_62C4FF
0x62C4BD: cmp     byte ptr [esi+0D0h], 0
0x62C4C4: jnz     loc_62C59F
0x62C4CA: mov     eax, [esi]
0x62C4CC: mov     edx, [eax+0C4h]
0x62C4D2: push    1
0x62C4D4: mov     ecx, esi
0x62C4D6: call    edx
0x62C4D8: mov     eax, [esi]
0x62C4DA: mov     edx, [eax+0BCh]
0x62C4E0: push    1
0x62C4E2: mov     ecx, esi
0x62C4E4: call    edx
0x62C4E6: mov     eax, [esi]
0x62C4E8: mov     edx, [eax+188h]
0x62C4EE: push    0FFFFFFFFh
0x62C4F0: push    edi
0x62C4F1: mov     ecx, esi
0x62C4F3: call    edx
0x62C4F5: pop     edi
0x62C4F6: pop     esi
0x62C4F7: pop     ebp
0x62C4F8: pop     ebx
0x62C4F9: add     esp, 50h
0x62C4FC: retn    4
0x62C4FF: cmp     byte ptr [esi+0D0h], 0
0x62C506: jnz     loc_62C59F
0x62C50C: push    1
0x62C50E: push    edi
0x62C50F: mov     ecx, ebx
0x62C511: call    sub_5677B0
0x62C516: call    Double_To_SInt32
0x62C51B: mov     [esp+60h+var_34], eax
0x62C51F: push    0; char
0x62C521: add     eax, eax
0x62C523: mov     [esp+64h+arg_0], eax
0x62C527: fild    [esp+64h+arg_0]
0x62C52B: push    0; char
0x62C52D: sub     esp, 0Ch
0x62C530: mov     ecx, esi
0x62C532: fstp    dword ptr [esp+74h+var_6C]; char
0x62C536: fild    [esp+74h+var_34]
0x62C53A: fstp    [esp+74h+var_70]; float
0x62C53E: fldz
0x62C540: fstp    [esp+74h+var_74]; float
0x62C543: push    edi; Concurrency::details::SchedulerBase *
0x62C544: call    sub_629F40
0x62C549: mov     edx, [esi]
0x62C54B: push    eax
0x62C54C: mov     eax, [edx+238h]
0x62C552: push    edi
0x62C553: mov     ecx, esi
0x62C555: call    eax
0x62C557: mov     ebp, [esi]
0x62C559: push    1
0x62C55B: push    edi
0x62C55C: mov     ecx, ebx
0x62C55E: add     ebp, 414h
0x62C564: call    sub_5677B0
0x62C569: push    ecx
0x62C56A: fstp    [esp+64h+var_64]
0x62C56D: push    edi
0x62C56E: mov     ecx, ebx
0x62C570: call    sub_566940
0x62C575: push    eax
0x62C576: push    edi
0x62C577: mov     ecx, ebx
0x62C579: call    sub_566A40
0x62C57E: push    eax
0x62C57F: push    edi
0x62C580: lea     ecx, [esp+70h+var_C]
0x62C584: push    ecx
0x62C585: mov     ecx, ebx
0x62C587: call    sub_566B30
0x62C58C: mov     edx, [ebp+0]
0x62C58F: push    eax
0x62C590: push    edi
0x62C591: mov     ecx, esi
0x62C593: call    edx
0x62C595: pop     edi
0x62C596: pop     esi
0x62C597: pop     ebp
0x62C598: pop     ebx
0x62C599: add     esp, 50h
0x62C59C: retn    4
0x62C59F: cmp     byte ptr [esp+60h+arg_0], 0
0x62C5A4: jz      short loc_62C5BC
0x62C5A6: lea     ecx, [esp+60h+var_24]
0x62C5AA: call    sub_404C90
0x62C5AF: fld     [esp+60h+var_44]
0x62C5B3: fcompp
0x62C5B5: fnstsw  ax
0x62C5B7: test    ah, 1
0x62C5BA: jnz     short loc_62C606
0x62C5BC: mov     ebp, [esi]
0x62C5BE: push    edi
0x62C5BF: lea     eax, [esp+64h+var_C]
0x62C5C3: push    eax
0x62C5C4: mov     ecx, ebx
0x62C5C6: add     ebp, 3DCh
0x62C5CC: call    sub_566B30
0x62C5D1: mov     ecx, [esp+60h+var_48]
0x62C5D5: push    edi
0x62C5D6: mov     ebx, eax
0x62C5D8: call    sub_566940
0x62C5DD: mov     ecx, [esp+60h+var_48]
0x62C5E1: push    eax
0x62C5E2: push    edi
0x62C5E3: call    sub_566A40
0x62C5E8: mov     ecx, [ebx]
0x62C5EA: mov     edx, [ebx+4]
0x62C5ED: push    eax
0x62C5EE: sub     esp, 0Ch
0x62C5F1: mov     eax, esp
0x62C5F3: mov     [eax], ecx
0x62C5F5: mov     ecx, [ebx+8]
0x62C5F8: mov     [eax+4], edx
0x62C5FB: mov     edx, [ebp+0]
0x62C5FE: mov     [eax+8], ecx
0x62C601: push    edi
0x62C602: mov     ecx, esi
0x62C604: call    edx
0x62C606: pop     edi
0x62C607: pop     esi
0x62C608: pop     ebp
0x62C609: pop     ebx
0x62C60A: add     esp, 50h
0x62C60D: retn    4
