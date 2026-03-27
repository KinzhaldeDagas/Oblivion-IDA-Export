0x596150: push    0FFFFFFFFh
0x596152: push    offset SEH_596150
0x596157: mov     eax, large fs:0
0x59615D: push    eax
0x59615E: sub     esp, 168h
0x596164: mov     eax, ds:0B30AACh
0x596169: xor     eax, esp
0x59616B: mov     [esp+174h+var_10], eax
0x596172: push    ebx
0x596173: push    esi
0x596174: push    edi; a3
0x596175: mov     eax, ds:0B30AACh
0x59617A: xor     eax, esp
0x59617C: push    eax; a3
0x59617D: lea     eax, [esp+184h+var_C]
0x596184: mov     large fs:0, eax
0x59618A: xor     ebx, ebx
0x59618C: push    ebx; a3
0x59618D: mov     esi, ecx
0x59618F: push    offset aDataMenusWorkb; "Data\\Menus\\workbook.html"
0x596194: lea     ecx, [esp+18Ch+var_16C]; this
0x596198: mov     [esp+18Ch+var_16C.m_data], ebx
0x59619C: mov     [esp+18Ch+var_16C.m_dataLen], bx
0x5961A1: mov     [esp+18Ch+var_16C.m_bufLen], bx
0x5961A6: call    BSStringT_Set
0x5961AB: mov     edi, [esp+184h+var_16C.m_data]
0x5961AF: push    ebx
0x5961B0: push    2800h
0x5961B5: push    ebx
0x5961B6: push    edi
0x5961B7: lea     ecx, [esp+194h+var_164]
0x5961BB: mov     [esp+194h+var_4], ebx
0x5961C2: call    BSFile_constr
0x5961C7: mov     [esp+184h+var_174], ebx
0x5961CB: mov     [esp+184h+var_170], bx
0x5961D0: mov     [esp+184h+var_16E], bx
0x5961D5: push    ebx
0x5961D6: push    ebx
0x5961D7: lea     ecx, [esp+18Ch+var_164]
0x5961DB: mov     byte ptr [esp+18Ch+var_4], 2
0x5961E3: call    BSFile_OpenFile
0x5961E8: cmp     [esp+184h+var_140], bl
0x5961EC: jnz     short loc_59620D
0x5961EE: mov     eax, dword ptr [esp+184h+var_16C.m_dataLen]
0x5961F2: push    eax
0x5961F3: push    edi
0x5961F4: push    offset aErrorOpeningWo; "ERROR: Opening workbook file: %s \n"
0x5961F9: call    Interface_ConsolePrint
0x5961FE: mov     ecx, [esp+190h+var_174]
0x596202: push    ecx
0x596203: call    FormHeapFree
0x596208: add     esp, 10h
0x59620B: jmp     short loc_596266
0x59620D: push    0FFFFFFFFh
0x59620F: lea     edx, [esp+188h+var_174]
0x596213: push    edx
0x596214: lea     ecx, [esp+18Ch+var_164]
0x596218: call    BSFile_ReadString
0x59621D: mov     eax, [esp+184h+var_174]
0x596221: mov     ecx, [esi+4]
0x596224: push    eax
0x596225: push    0FB0h
0x59622A: call    Tile_SetString
0x59622F: fld     dword ptr ds:0A6B328h
0x596235: mov     ecx, [esi+4]; this
0x596238: push    ecx
0x596239: fstp    [esp+188h+a2]; a3
0x59623C: push    0FB4h; a2
0x596241: call    Tile_SetFloat
0x596246: fldz
0x596248: mov     ecx, [esi+4]; this
0x59624B: push    ecx
0x59624C: fstp    [esp+188h+a2]; a3
0x59624F: push    0FB4h; a2
0x596254: call    Tile_SetFloat
0x596259: mov     ecx, [esp+184h+var_174]
0x59625D: push    ecx
0x59625E: call    FormHeapFree
0x596263: add     esp, 4
0x596266: lea     ecx, [esp+184h+var_164]; this
0x59626A: mov     [esp+184h+var_174], ebx
0x59626E: mov     [esp+184h+var_16E], bx
0x596273: mov     [esp+184h+var_170], bx
0x596278: mov     byte ptr [esp+184h+var_4], bl
0x59627F: call    ??1BSFile@@UAE@XZ; BSFile::~BSFile(void)
0x596284: push    edi
0x596285: call    FormHeapFree
0x59628A: add     esp, 4
0x59628D: mov     ecx, [esp+184h+var_C]
0x596294: mov     large fs:0, ecx
0x59629B: pop     ecx
0x59629C: pop     edi
0x59629D: pop     esi
0x59629E: pop     ebx
0x59629F: mov     ecx, [esp+174h+var_10]
0x5962A6: xor     ecx, esp
0x5962A8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5962AD: add     esp, 174h
0x5962B3: retn
