0x473AA0: fldz
0x473AA2: push    esi
0x473AA3: push    ecx
0x473AA4: fstp    [esp+8+var_8]; float
0x473AA7: push    4; int
0x473AA9: mov     esi, ecx
0x473AAB: call    sub_470FC0
0x473AB0: fldz
0x473AB2: push    ecx
0x473AB3: fstp    [esp+8+var_8]; float
0x473AB6: push    0; int
0x473AB8: mov     ecx, esi
0x473ABA: call    sub_470FC0
0x473ABF: fldz
0x473AC1: push    ecx
0x473AC2: fstp    [esp+8+var_8]; float
0x473AC5: push    1; int
0x473AC7: mov     ecx, esi
0x473AC9: call    sub_470FC0
0x473ACE: fldz
0x473AD0: push    ecx
0x473AD1: fstp    [esp+8+var_8]; float
0x473AD4: push    2; int
0x473AD6: mov     ecx, esi
0x473AD8: call    sub_470FC0
0x473ADD: mov     ecx, [esi+98h]
0x473AE3: test    ecx, ecx
0x473AE5: jz      short loc_473B3A
0x473AE7: mov     eax, [esi+0ACh]
0x473AED: test    eax, eax
0x473AEF: jz      short loc_473B3A
0x473AF1: cmp     dword ptr [eax+44h], 0
0x473AF5: jz      short loc_473B3A
0x473AF7: mov     eax, [eax+58h]
0x473AFA: test    eax, eax
0x473AFC: jz      short loc_473B0A
0x473AFE: fldz
0x473B00: push    ecx
0x473B01: fstp    [esp+8+var_8]; float
0x473B04: push    eax; int
0x473B05: call    sub_470B50
0x473B0A: mov     eax, [esi+0ACh]
0x473B10: cmp     dword ptr [eax+44h], 5
0x473B14: jnz     short loc_473B27
0x473B16: fldz
0x473B18: push    ecx
0x473B19: mov     ecx, [esi+98h]
0x473B1F: fstp    [esp+8+var_8]; float
0x473B22: call    sub_6C4480
0x473B27: fldz
0x473B29: push    0; char
0x473B2B: push    ecx
0x473B2C: fstp    [esp+0Ch+var_C]; float
0x473B2F: mov     ecx, [esi+0ACh]
0x473B35: call    sub_6C9CB0
0x473B3A: mov     eax, 0FFh
0x473B3F: mov     dword ptr [esi+0ACh], 0
0x473B49: mov     [esi+42h], ax
0x473B4D: mov     [esi+76h], ax
0x473B51: push    edi
0x473B52: mov     ecx, esi
0x473B54: mov     dword ptr [esi+54h], 0FFFFFFFFh
0x473B5B: call    sub_4728C0
0x473B60: cmp     dword ptr [esi+0CCh], 0
0x473B67: lea     edi, [esi+0CCh]
0x473B6D: jz      short loc_473B77
0x473B6F: push    edi
0x473B70: mov     ecx, esi
0x473B72: call    sub_472ED0
0x473B77: cmp     dword ptr [esi+0D0h], 0
0x473B7E: mov     dword ptr [edi], 0
0x473B84: lea     edi, [esi+0D0h]
0x473B8A: jz      short loc_473B94
0x473B8C: push    edi
0x473B8D: mov     ecx, esi
0x473B8F: call    sub_472ED0
0x473B94: fldz
0x473B96: push    ecx
0x473B97: fstp    [esp+0Ch+var_C]; float
0x473B9A: mov     ecx, esi
0x473B9C: push    4; int
0x473B9E: mov     dword ptr [edi], 0
0x473BA4: mov     dword ptr [esi+0B0h], 0
0x473BAE: call    sub_470FC0
0x473BB3: mov     ecx, [esi+98h]
0x473BB9: test    ecx, ecx
0x473BBB: pop     edi
0x473BBC: jz      short loc_473BC9
0x473BBE: fldz
0x473BC0: push    ecx
0x473BC1: fstp    [esp+8+var_8]; float
0x473BC4: call    sub_4715C0
0x473BC9: mov     ecx, [esi+4]
0x473BCC: push    ecx
0x473BCD: call    sub_473120
0x473BD2: add     esp, 4
0x473BD5: mov     ecx, esi
0x473BD7: call    sub_4730B0
0x473BDC: push    1
0x473BDE: mov     ecx, esi
0x473BE0: call    sub_473200
0x473BE5: pop     esi
0x473BE6: retn    4
