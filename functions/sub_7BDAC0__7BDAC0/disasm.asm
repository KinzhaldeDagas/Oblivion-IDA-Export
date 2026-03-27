0x7BDAC0: push    0FFFFFFFFh
0x7BDAC2: push    offset SEH_8C8970
0x7BDAC7: mov     eax, large fs:0
0x7BDACD: push    eax
0x7BDACE: push    ecx
0x7BDACF: push    esi
0x7BDAD0: push    edi
0x7BDAD1: mov     eax, ds:0B30AACh
0x7BDAD6: xor     eax, esp
0x7BDAD8: push    eax
0x7BDAD9: lea     eax, [esp+1Ch+var_C]
0x7BDADD: mov     large fs:0, eax
0x7BDAE3: mov     edi, [esp+1Ch+arg_0]
0x7BDAE7: push    4
0x7BDAE9: mov     ecx, edi
0x7BDAEB: call    NiNode_GetNiPropertyByID
0x7BDAF0: mov     esi, eax
0x7BDAF2: test    esi, esi
0x7BDAF4: jz      short loc_7BDB43
0x7BDAF6: mov     eax, [esi]
0x7BDAF8: mov     edx, [eax+54h]
0x7BDAFB: mov     ecx, esi
0x7BDAFD: call    edx
0x7BDAFF: xor     ecx, ecx
0x7BDB01: cmp     eax, 0Bh
0x7BDB04: setz    cl
0x7BDB07: mov     eax, ecx
0x7BDB09: test    eax, eax
0x7BDB0B: jnz     loc_7BDBA9
0x7BDB11: push    4
0x7BDB13: lea     edx, [esp+20h+arg_0]
0x7BDB17: push    edx
0x7BDB18: mov     ecx, edi
0x7BDB1A: call    sub_708560
0x7BDB1F: mov     esi, [esp+1Ch+arg_0]
0x7BDB23: test    esi, esi
0x7BDB25: jz      short loc_7BDB43
0x7BDB27: lea     eax, [esi+4]
0x7BDB2A: push    eax; lpAddend
0x7BDB2B: call    dword ptr ds:0A2807Ch
0x7BDB31: test    eax, eax
0x7BDB33: jnz     short loc_7BDB43
0x7BDB35: test    esi, esi
0x7BDB37: jz      short loc_7BDB43
0x7BDB39: mov     edx, [esi]
0x7BDB3B: mov     eax, [edx]
0x7BDB3D: push    1
0x7BDB3F: mov     ecx, esi
0x7BDB41: call    eax
0x7BDB43: push    8Ch ; 'Œ'; Size
0x7BDB48: call    FormHeapAlloc
0x7BDB4D: add     esp, 4
0x7BDB50: mov     [esp+1Ch+var_10], eax
0x7BDB54: test    eax, eax
0x7BDB56: mov     [esp+1Ch+var_4], 0
0x7BDB5E: jz      short loc_7BDB6B
0x7BDB60: mov     ecx, eax; this
0x7BDB62: call    ??0SkyShaderProperty@@QAE@XZ; SkyShaderProperty::SkyShaderProperty(void)
0x7BDB67: mov     esi, eax
0x7BDB69: jmp     short loc_7BDB6D
0x7BDB6B: xor     esi, esi
0x7BDB6D: push    esi; a2
0x7BDB6E: mov     ecx, edi; this
0x7BDB70: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7BDB78: call    sub_405680
0x7BDB7D: mov     edx, [esi]
0x7BDB7F: mov     eax, [edx+58h]
0x7BDB82: push    edi
0x7BDB83: mov     ecx, esi
0x7BDB85: call    eax
0x7BDB87: test    al, al
0x7BDB89: jnz     short loc_7BDBB3
0x7BDB8B: push    esi
0x7BDB8C: mov     ecx, edi
0x7BDB8E: call    sub_4A1220
0x7BDB93: xor     al, al
0x7BDB95: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7BDB99: mov     large fs:0, ecx
0x7BDBA0: pop     ecx
0x7BDBA1: pop     edi
0x7BDBA2: pop     esi
0x7BDBA3: add     esp, 10h
0x7BDBA6: retn    4
0x7BDBA9: mov     edx, [esi]
0x7BDBAB: mov     eax, [edx+58h]
0x7BDBAE: push    edi
0x7BDBAF: mov     ecx, esi
0x7BDBB1: call    eax
0x7BDBB3: mov     al, 1
0x7BDBB5: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7BDBB9: mov     large fs:0, ecx
0x7BDBC0: pop     ecx
0x7BDBC1: pop     edi
0x7BDBC2: pop     esi
0x7BDBC3: add     esp, 10h
0x7BDBC6: retn    4
