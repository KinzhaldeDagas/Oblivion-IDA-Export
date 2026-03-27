0x7A8250: push    0FFFFFFFFh
0x7A8252: push    offset SEH_7A8250
0x7A8257: mov     eax, large fs:0
0x7A825D: push    eax
0x7A825E: sub     esp, 60h
0x7A8261: push    ebp
0x7A8262: push    esi
0x7A8263: push    edi
0x7A8264: mov     eax, ds:0B30AACh
0x7A8269: xor     eax, esp
0x7A826B: push    eax
0x7A826C: lea     eax, [esp+7Ch+var_C]
0x7A8270: mov     large fs:0, eax
0x7A8276: push    4Ch ; 'L'; Size
0x7A8278: call    FormHeapAlloc
0x7A827D: add     esp, 4
0x7A8280: mov     [esp+7Ch+var_6C], eax
0x7A8284: test    eax, eax
0x7A8286: mov     [esp+7Ch+var_4], 0
0x7A828E: jz      short loc_7A829B
0x7A8290: mov     ecx, eax
0x7A8292: call    sub_7A7D80
0x7A8297: mov     edi, eax
0x7A8299: jmp     short loc_7A829D
0x7A829B: xor     edi, edi
0x7A829D: mov     esi, [esp+7Ch+arg_0]
0x7A82A4: mov     ecx, esi
0x7A82A6: mov     [esp+7Ch+var_4], 0FFFFFFFFh
0x7A82AE: call    sub_78EB40
0x7A82B3: add     eax, 0FFFFE4A2h; switch 11 cases
0x7A82B8: cmp     eax, 0Ah
0x7A82BB: ja      def_7A82C1; jumptable 007A82C1 default case, cases 7009,7014
0x7A82C1: jmp     ds:jpt_7A82C1[eax*4]; switch jump
0x7A82C8: mov     ecx, esi; jumptable 007A82C1 case 7006
0x7A82CA: call    sub_78EB70
0x7A82CF: mov     [edi+14h], eax
0x7A82D2: jmp     loc_7A83DE
0x7A82D7: mov     ebp, [esi]; jumptable 007A82C1 case 7007
0x7A82D9: lea     eax, [ebp+1]
0x7A82DC: mov     [esi], eax
0x7A82DE: mov     ecx, [esi+8]
0x7A82E1: test    ecx, ecx
0x7A82E3: jz      short loc_7A82EE
0x7A82E5: mov     eax, [esi+0Ch]
0x7A82E8: sub     eax, ecx
0x7A82EA: cmp     ebp, eax
0x7A82EC: jb      short loc_7A82F3
0x7A82EE: call    __invalid_parameter_noinfo
0x7A82F3: mov     ecx, [esi+8]
0x7A82F6: mov     dl, [ecx+ebp]
0x7A82F9: mov     [edi+10h], dl
0x7A82FC: jmp     loc_7A83DE
0x7A8301: mov     ebp, [esi]; jumptable 007A82C1 case 7008
0x7A8303: lea     eax, [ebp+1]
0x7A8306: mov     [esi], eax
0x7A8308: mov     ecx, [esi+8]
0x7A830B: test    ecx, ecx
0x7A830D: jz      short loc_7A8318
0x7A830F: mov     eax, [esi+0Ch]
0x7A8312: sub     eax, ecx
0x7A8314: cmp     ebp, eax
0x7A8316: jb      short loc_7A831D
0x7A8318: call    __invalid_parameter_noinfo
0x7A831D: mov     ecx, [esi+8]
0x7A8320: mov     dl, [ecx+ebp]
0x7A8323: mov     [edi+18h], dl
0x7A8326: jmp     loc_7A83DE
0x7A832B: lea     eax, [esp+7Ch+var_68]; jumptable 007A82C1 case 7010
0x7A832F: push    eax
0x7A8330: mov     ecx, esi
0x7A8332: call    sub_78EBA0
0x7A8337: mov     ecx, [eax]
0x7A8339: mov     [edi+1Ch], ecx
0x7A833C: mov     edx, [eax+4]
0x7A833F: mov     [edi+20h], edx
0x7A8342: mov     eax, [eax+8]
0x7A8345: mov     [edi+24h], eax
0x7A8348: jmp     loc_7A83DE
0x7A834D: mov     ebp, [esi]; jumptable 007A82C1 case 7011
0x7A834F: lea     ecx, [ebp+1]
0x7A8352: mov     [esi], ecx
0x7A8354: mov     ecx, [esi+8]
0x7A8357: test    ecx, ecx
0x7A8359: jz      short loc_7A8364
0x7A835B: mov     eax, [esi+0Ch]
0x7A835E: sub     eax, ecx
0x7A8360: cmp     ebp, eax
0x7A8362: jb      short loc_7A8369
0x7A8364: call    __invalid_parameter_noinfo
0x7A8369: mov     edx, [esi+8]
0x7A836C: mov     al, [edx+ebp]
0x7A836F: mov     [edi+40h], al
0x7A8372: jmp     short loc_7A83DE
0x7A8374: mov     ebp, [esi]; jumptable 007A82C1 case 7012
0x7A8376: lea     ecx, [ebp+1]
0x7A8379: mov     [esi], ecx
0x7A837B: mov     ecx, [esi+8]
0x7A837E: test    ecx, ecx
0x7A8380: jz      short loc_7A838B
0x7A8382: mov     eax, [esi+0Ch]
0x7A8385: sub     eax, ecx
0x7A8387: cmp     ebp, eax
0x7A8389: jb      short loc_7A8390
0x7A838B: call    __invalid_parameter_noinfo
0x7A8390: mov     edx, [esi+8]
0x7A8393: movzx   eax, byte ptr [edx+ebp]
0x7A8397: mov     [esp+7Ch+var_6C], eax
0x7A839B: fild    [esp+7Ch+var_6C]
0x7A839F: fdiv    qword ptr ds:0A3DDD8h
0x7A83A5: fstp    dword ptr [edi+44h]
0x7A83A8: jmp     short loc_7A83DE
0x7A83AA: mov     ecx, esi; jumptable 007A82C1 case 7013
0x7A83AC: call    sub_78EB40
0x7A83B1: mov     [edi+48h], eax
0x7A83B4: jmp     short loc_7A83DE
0x7A83B6: lea     ecx, [esp+7Ch+var_5C]; jumptable 007A82C1 case 7015
0x7A83BA: push    ecx
0x7A83BB: mov     ecx, esi
0x7A83BD: call    sub_78EBA0
0x7A83C2: mov     edx, [eax]
0x7A83C4: mov     [edi+4], edx
0x7A83C7: mov     ecx, [eax+4]
0x7A83CA: mov     [edi+8], ecx
0x7A83CD: mov     edx, [eax+8]
0x7A83D0: mov     [edi+0Ch], edx
0x7A83D3: jmp     short loc_7A83DE
0x7A83D5: mov     ecx, esi; jumptable 007A82C1 case 7016
0x7A83D7: call    sub_78EB10
0x7A83DC: fstp    st
0x7A83DE: mov     ecx, esi
0x7A83E0: call    sub_78EB40
0x7A83E5: cmp     eax, 1B5Dh
0x7A83EA: jnz     loc_7A82B3
0x7A83F0: mov     eax, edi
0x7A83F2: mov     ecx, [esp+7Ch+var_C]
0x7A83F6: mov     large fs:0, ecx
0x7A83FD: pop     ecx
0x7A83FE: pop     edi
0x7A83FF: pop     esi
0x7A8400: pop     ebp
0x7A8401: add     esp, 6Ch
0x7A8404: retn
0x7A8405: push    18h; jumptable 007A82C1 default case, cases 7009,7014
0x7A8407: push    offset aMalformedBillb; "malformed billboard leaf"
0x7A840C: lea     ecx, [esp+84h+var_50]
0x7A8410: mov     [esp+84h+var_38], 0Fh
0x7A8418: mov     [esp+84h+var_3C], 0
0x7A8420: mov     [esp+84h+var_4C], 0
0x7A8425: call    sub_414500
0x7A842A: push    0
0x7A842C: lea     eax, [esp+80h+var_50]
0x7A8430: push    eax
0x7A8431: lea     ecx, [esp+84h+var_34]
0x7A8435: mov     [esp+84h+var_4], 1
0x7A8440: call    sub_789190
0x7A8445: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A844A: lea     ecx, [esp+80h+var_34]
0x7A844E: push    ecx
0x7A844F: call    ThrowException??
