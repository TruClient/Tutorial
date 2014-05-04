#ifndef VUSER_WEBSOCKET_BUFFER_HEADER
#define VUSER_WEBSOCKET_BUFFER_HEADER

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive0[] = "var myEnv = lsc;\n"
                        "var phase = null;\n"
                        "function setPhase(ph) {\n"
                        " phase = ph;\n"
                        "}\n"
                        "\n"
                        "var winPhase = {};\n"
                        "function setWin(tbl, ph) {\n"
                        " winPhase[tbl] = ph;\n"
                        "}\n"
                        "\n"
                        "var clsd = false;\n"
                        "function c(cod, ph, tbl, its, flds, key, com) {\n"
                        " LS_window.LS_w(cod, ph, tbl, its, flds, key, com);\n"
                        "}\n"
                        "\n"
                        "function error(cod, ph, tbl, msg) {\n"
                        " if (tbl != null) {\n"
                        "  LS_window.LS_l(cod, ph, tbl, msg);\n"
                        " } else {\n"
                        "  LS_window.LS_l(cod, phase, null, msg);\n"
                        " }\n"
                        "}\n"
                        "\n"
                        "function start(sID, addr, kaMs, reqLim, srv) {\n"
                        " LS_window.LS_e(1, phase, sID, addr, kaMs, reqLim, srv);\n"
                        "}\n"
                        "\n"
                        "function end(cause) {\n"
                        " LS_window.LS_e(4, phase, cause);\n"
                        "}\n"
                        "\n"
                        "function loop(holdMs) {\n"
                        " LS_window.LS_e(2, phase, holdMs);\n"
                        "}\n"
                        "\n"
                        "function retry() {\n"
                        " LS_window.LS_e(3, phase);\n"
                        "}\n"
                        "\n"
                        "function bw(maxBW) {\n"
                        " LS_window.LS_e(5, phase, maxBW);\n"
                        "}\n"
                        "\n"
                        "function y(secs) {\n"
                        " LS_window.LS_s(phase, secs);\n"
                        "}\n"
                        "\n"
                        "var unchangedSignal = {};\n"
                        "unchangedSignal.length = -1;\n"
                        "function convert(b, f) {\n"
                        "  var a, c, d = f, e = [];\n"
                        "  for(a = 0;a < b.length;a++) {\n"
                        "    if(a < f) {\n"
                        "      e[a] = b[a]\n"
                        "    } else {\n"
                        "      if(b[a].charAt) {\n"
                        "        b[a] == '$' ? e[d] = '' : b[a] == '#' ? e[d] = null : (c = b[a].charAt(0"
                        "), e[d] = c == '$' || c == '#' ? b[a].substring(1) : b[a]), d++\n"
                        "      } else {\n"
                        "        for(c = 0;c < b[a];c++) {\n"
                        "          e[d] = unchangedSignal, d++\n"
                        "        }\n"
                        "      }\n"
                        "    }\n"
                        "  }\n"
                        "  return e;\n"
                        "}\n"
                        "function d(tbl) {\n"
                        " try { LS_window.LS_u(winPhase[tbl], convert(d.arguments, 2)); } catch(exc) {}\n"
                        "}\n"
                        "function z(tbl) {\n"
                        " LS_window.LS_v(winPhase[tbl], convert(z.arguments, 2));\n"
                        "}\n"
                        "function n(tbl) {\n"
                        " LS_window.LS_n(winPhase[tbl], n.arguments);\n"
                        "}\n"
                        "function r(tbl) {\n"
                        " LS_window.LS_o(winPhase[tbl], r.arguments);\n"
                        "}\n"
                        "function p() {\n"
                        " LS_window.LS_u(phase, p.arguments);\n"
                        "}\n"
                        "myEnv.setPhase = setPhase;\n"
                        "myEnv.setWin = setWin;\n"
                        "myEnv.c = c;\n"
                        "myEnv.error = error;\n"
                        "myEnv.end = end;\n"
                        "myEnv.start = start;\n"
                        "myEnv.loop = loop;\n"
                        "myEnv.retry = retry;\n"
                        "myEnv.bw = bw;\n"
                        "myEnv.y = y;\n"
                        "myEnv.convert = convert;\n"
                        "myEnv.d = d;\n"
                        "myEnv.z = z;\n"
                        "myEnv.n = n;\n"
                        "myEnv.r = r;\n"
                        "myEnv.p = p;\n"
                        "myEnv.LS_window = LS_window;\n"
                        "\n"
                        "// END OF HEADER\n"
                        "\n"
                        "setPhase(303);\n"
                        "start('Se0242becabc00d66T1805176', null, 5000, 50000);\n";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	// (record-time: 2044 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive1[] = "bw(0.0);\n";
long WebSocketReceiveLen1   = sizeof(WebSocketReceive1) - 1;	// (record-time: 9 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive2[] = "c(6,30,1,10,12,-1,-1);setWin(1,30);\n";
long WebSocketReceiveLen2   = sizeof(WebSocketReceive2) - 1;	// (record-time: 36 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive3[] = "z(1,10,'ELE Manufacturing','8.68','07:18:06','14.06','65500','8.68','8.69','3150"
                        "0','6.52','8.75','7.61','7.7');z(1,1,'Anduct','3.2','07:18:06','5.26','11000','3"
                        ".2','3.21','35000','2.54','3.37','3.04','3.1');z(1,3,'Bagies Consulting','7.3','"
                        "07:18:06','1.52','34000','7.3','7.32','49000','5.92','8.39','7.19','7.25');z(1,4"
                        ",'BAY Corporation','3.38','07:18:06','-6.88','44500','3.38','3.39','72500','3.35"
                        "','3.71','3.63','3.62');z(1,5,'CON Consulting','8.11','07:18:06','6.57','74000',"
                        "'8.11','8.13','77500','6.52','9.0','7.61','7.65');z(1,6,'Corcor PLC','2.41','07:"
                        "18:06','4.78','43500','2.41','2.42','72000','1.88','2.57','2.3','2.3');z(1,7,'CV"
                        "S Asia','15.03','07:18:06','-2.33','37500','15.03','15.04','51000','13.08','17.9"
                        "9','15.39','15.85');z(1,8,'Datio PLC','5.48','07:18:06','3.2','50500','5.47','5."
                        "48','48000','4.46','6.14','5.31','5.31');z(1,9,'Dentems','4.1','07:18:06','-15.6"
                        "3','56000','4.09','4.1','93000','4.08','5.67','4.86','4.97');z(1,2,'Ations Europ"
                        "e','14.9','07:18:06','-7.39','3000','14.9','14.93','62000','13.07','18.83','16.0"
                        "9','16.2');\n";
long WebSocketReceiveLen3   = sizeof(WebSocketReceive3) - 1;	// (record-time: 1052 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive4[] = "d(1,2,1,'14.74',1,'-8.39','24500','14.74','14.78','57000',4);\n";
long WebSocketReceiveLen4   = sizeof(WebSocketReceive4) - 1;	// (record-time: 62 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive5[] = "d(1,2,1,'14.63','07:18:07','-9.07','92500','14.57','14.63','40500',4);\n";
long WebSocketReceiveLen5   = sizeof(WebSocketReceive5) - 1;	// (record-time: 71 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive6[] = "d(1,9,1,'4.06','07:18:07','-16.46','47500','4.06','4.07','82500','4.06',3);\n";
long WebSocketReceiveLen6   = sizeof(WebSocketReceive6) - 1;	// (record-time: 76 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive7[] = "d(1,8,1,'5.44','07:18:07','2.44','53000','5.42','5.44','67500',4);\n";
long WebSocketReceiveLen7   = sizeof(WebSocketReceive7) - 1;	// (record-time: 67 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive8[] = "d(1,5,1,'8.18','07:18:07','7.49','49500','8.16','8.18','95000',4);\n";
long WebSocketReceiveLen8   = sizeof(WebSocketReceive8) - 1;	// (record-time: 67 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive9[] = "d(1,2,1,'14.49','07:18:08','-9.94','96000','14.49','14.52','90000',4);\n";
long WebSocketReceiveLen9   = sizeof(WebSocketReceive9) - 1;	// (record-time: 71 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive10[] = "d(1,3,1,'7.26','07:18:08','0.97','75500','7.25','7.26','28500',4);\n";
long WebSocketReceiveLen10   = sizeof(WebSocketReceive10) - 1;	// (record-time: 67 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive11[] = "d(1,2,1,'14.51',1,'-9.81','96500','14.51',1,'86000',4);\n";
long WebSocketReceiveLen11   = sizeof(WebSocketReceive11) - 1;	// (record-time: 56 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive12[] = "d(1,2,1,'14.6',1,'-9.26','74500','14.59','14.6','52500',4);\n";
long WebSocketReceiveLen12   = sizeof(WebSocketReceive12) - 1;	// (record-time: 60 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive13[] = "d(1,2,1,'14.44',1,'-10.25','89000','14.4','14.44','75500',4);\n";
long WebSocketReceiveLen13   = sizeof(WebSocketReceive13) - 1;	// (record-time: 62 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive14[] = "d(1,7,1,'15.04','07:18:08','-2.27','97500','15.04','15.1','61500',4);\n";
long WebSocketReceiveLen14   = sizeof(WebSocketReceive14) - 1;	// (record-time: 70 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive15[] = "d(1,2,1,'14.54','07:18:09','-9.63','71000','14.53','14.54','47000',4);\n";
long WebSocketReceiveLen15   = sizeof(WebSocketReceive15) - 1;	// (record-time: 71 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive16[] = "d(1,2,1,'14.41',1,'-10.44','24000','14.41','14.46','88500',4);\n";
long WebSocketReceiveLen16   = sizeof(WebSocketReceive16) - 1;	// (record-time: 63 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive17[] = "d(1,2,1,'14.37',1,'-10.68','62000','14.37','14.43','91000',4);\n";
long WebSocketReceiveLen17   = sizeof(WebSocketReceive17) - 1;	// (record-time: 63 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive18[] = "d(1,2,1,'14.32',1,'-11.0','83000','14.29','14.32','68500',4);\n";
long WebSocketReceiveLen18   = sizeof(WebSocketReceive18) - 1;	// (record-time: 62 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive19[] = "d(1,2,1,'14.21','07:18:10','-11.68','45500','14.15','14.21','9500',4);\n";
long WebSocketReceiveLen19   = sizeof(WebSocketReceive19) - 1;	// (record-time: 71 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive20[] = "y(5);\n"
                        "d(1,2,1,'14.37','07:18:11','-10.68','73000','14.34','14.37','61500',4);\n";
long WebSocketReceiveLen20   = sizeof(WebSocketReceive20) - 1;	// (record-time: 78 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive21[] = "d(1,7,1,'15.13','07:18:11','-1.68','47500','15.13','15.19','85500',4);\n";
long WebSocketReceiveLen21   = sizeof(WebSocketReceive21) - 1;	// (record-time: 71 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive22[] = "d(1,10,1,'8.71','07:18:11','14.45','82500','8.71','8.72','100000',4);\n";
long WebSocketReceiveLen22   = sizeof(WebSocketReceive22) - 1;	// (record-time: 70 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive23[] = "d(1,2,1,'14.33',1,'-10.93','40500','14.3','14.33','65500',4);\n";
long WebSocketReceiveLen23   = sizeof(WebSocketReceive23) - 1;	// (record-time: 62 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive24[] = "d(1,3,1,'7.31','07:18:12','1.66','8000','7.31','7.33','73000',4);\n";
long WebSocketReceiveLen24   = sizeof(WebSocketReceive24) - 1;	// (record-time: 66 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive25[] = "d(1,2,1,'14.29','07:18:12','-11.18','89000','14.23','14.29','70500',4);\n";
long WebSocketReceiveLen25   = sizeof(WebSocketReceive25) - 1;	// (record-time: 72 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive26[] = "d(1,2,1,'14.23','07:18:13','-11.55','51500',2,'99500',4);\n";
long WebSocketReceiveLen26   = sizeof(WebSocketReceive26) - 1;	// (record-time: 58 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive27[] = "d(1,2,1,'14.3',1,'-11.12','23000','14.3','14.31','74000',4);\n";
long WebSocketReceiveLen27   = sizeof(WebSocketReceive27) - 1;	// (record-time: 61 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive28[] = "d(1,2,1,'14.21',1,'-11.68','34000','14.21','14.27','72500',4);\n";
long WebSocketReceiveLen28   = sizeof(WebSocketReceive28) - 1;	// (record-time: 63 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive29[] = "d(1,6,2,'07:18:14',1,'97500',2,'96000',4);\n";
long WebSocketReceiveLen29   = sizeof(WebSocketReceive29) - 1;	// (record-time: 43 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive30[] = "d(1,2,2,'07:18:14',1,'72500',1,'14.22','55500',4);\n";
long WebSocketReceiveLen30   = sizeof(WebSocketReceive30) - 1;	// (record-time: 51 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive31[] = "d(1,2,1,'14.3',1,'-11.12','66500','14.24','14.3','26500',4);\n";
long WebSocketReceiveLen31   = sizeof(WebSocketReceive31) - 1;	// (record-time: 61 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive32[] = "d(1,7,1,'15.25','07:18:14','-0.9','39500','15.24','15.25','40500',4);\n";
long WebSocketReceiveLen32   = sizeof(WebSocketReceive32) - 1;	// (record-time: 70 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive33[] = "d(1,5,2,'07:18:14',1,'85500','8.18','8.19','46500',4);\n";
long WebSocketReceiveLen33   = sizeof(WebSocketReceive33) - 1;	// (record-time: 55 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive34[] = "d(1,3,1,'7.27','07:18:14','1.11','47500','7.25','7.27','48500',4);\n";
long WebSocketReceiveLen34   = sizeof(WebSocketReceive34) - 1;	// (record-time: 67 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive35[] = "d(1,9,2,'07:18:15',1,'6500',2,'64000',4);\n";
long WebSocketReceiveLen35   = sizeof(WebSocketReceive35) - 1;	// (record-time: 42 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive36[] = "d(1,2,1,'14.39','07:18:15','-10.56','87500','14.39','14.41','3500',4);\n";
long WebSocketReceiveLen36   = sizeof(WebSocketReceive36) - 1;	// (record-time: 71 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive37[] = "d(1,2,1,'14.46',1,'-10.13','70000','14.46','14.47','14500',4);\n";
long WebSocketReceiveLen37   = sizeof(WebSocketReceive37) - 1;	// (record-time: 63 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive38[] = "d(1,2,1,'14.32','07:18:16','-11.0','91000','14.31','14.32','44500',4);\n";
long WebSocketReceiveLen38   = sizeof(WebSocketReceive38) - 1;	// (record-time: 71 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive39[] = "d(1,2,1,'14.37',1,'-10.68','84500',1,'14.37','8000',4);\n";
long WebSocketReceiveLen39   = sizeof(WebSocketReceive39) - 1;	// (record-time: 56 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive40[] = "y(11);\n"
                        "d(1,2,1,'14.49','07:18:17','-9.94','96500','14.49','14.53','1500',4);\n";
long WebSocketReceiveLen40   = sizeof(WebSocketReceive40) - 1;	// (record-time: 77 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive41[] = "d(1,3,1,'7.23','07:18:17','0.55','17500','7.21','7.23','73500',4);\n";
long WebSocketReceiveLen41   = sizeof(WebSocketReceive41) - 1;	// (record-time: 67 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive42[] = "d(1,8,1,'5.45','07:18:18','2.63','54500','5.45','5.46','16500',4);\n";
long WebSocketReceiveLen42   = sizeof(WebSocketReceive42) - 1;	// (record-time: 67 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive43[] = "d(1,2,1,'14.6','07:18:18','-9.26','57500','14.6','14.66','73500',4);\n";
long WebSocketReceiveLen43   = sizeof(WebSocketReceive43) - 1;	// (record-time: 69 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive44[] = "d(1,7,1,'15.34','07:18:18','-0.32','73000','15.34','15.35','79500',4);\n";
long WebSocketReceiveLen44   = sizeof(WebSocketReceive44) - 1;	// (record-time: 71 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive45[] = "d(1,2,1,'14.62','07:18:19','-9.13','48500','14.59','14.62','76000',4);\n";
long WebSocketReceiveLen45   = sizeof(WebSocketReceive45) - 1;	// (record-time: 71 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive46[] = "d(1,2,1,'14.78',1,'-8.14','94500','14.78','14.83','66000',4);\n";
long WebSocketReceiveLen46   = sizeof(WebSocketReceive46) - 1;	// (record-time: 62 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive47[] = "d(1,2,1,'14.68','07:18:20','-8.76','56000','14.68','14.74','10500',4);\n";
long WebSocketReceiveLen47   = sizeof(WebSocketReceive47) - 1;	// (record-time: 71 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive48[] = "d(1,10,2,'07:18:20',1,'36500','8.69','8.71','77500',4);\n";
long WebSocketReceiveLen48   = sizeof(WebSocketReceive48) - 1;	// (record-time: 56 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive49[] = "d(1,3,1,'7.17','07:18:20','-0.27','32500','7.16','7.17','83000',4);\n";
long WebSocketReceiveLen49   = sizeof(WebSocketReceive49) - 1;	// (record-time: 68 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive50[] = "d(1,9,1,'4.09','07:18:20','-15.84','82000','4.08','4.09','74000',4);\n";
long WebSocketReceiveLen50   = sizeof(WebSocketReceive50) - 1;	// (record-time: 69 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive51[] = "d(1,2,1,'14.73',1,'-8.45','78500','14.69','14.73','26500',4);\n";
long WebSocketReceiveLen51   = sizeof(WebSocketReceive51) - 1;	// (record-time: 62 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive52[] = "d(1,5,1,'8.16','07:18:21','7.22','81000','8.13','8.16','87000',4);\n";
long WebSocketReceiveLen52   = sizeof(WebSocketReceive52) - 1;	// (record-time: 67 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive53[] = "d(1,2,1,'14.58','07:18:21','-9.38','8000','14.53','14.58','70500',4);\n";
long WebSocketReceiveLen53   = sizeof(WebSocketReceive53) - 1;	// (record-time: 70 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive54[] = "d(1,2,1,'14.6',1,'-9.26',1,'14.58','14.6','41500',4);\n";
long WebSocketReceiveLen54   = sizeof(WebSocketReceive54) - 1;	// (record-time: 54 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive55[] = "d(1,7,1,'15.49','07:18:22','0.64','91000','15.46','15.49','32000',4);\n";
long WebSocketReceiveLen55   = sizeof(WebSocketReceive55) - 1;	// (record-time: 70 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive56[] = "d(1,3,2,'07:18:22',1,'2500',2,'60500',4);\n";
long WebSocketReceiveLen56   = sizeof(WebSocketReceive56) - 1;	// (record-time: 42 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive57[] = "d(1,2,1,'14.61','07:18:22','-9.19',1,'14.6','14.61','18000',4);\n";
long WebSocketReceiveLen57   = sizeof(WebSocketReceive57) - 1;	// (record-time: 64 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive58[] = "d(1,8,1,'5.48','07:18:23','3.2','78000','5.46','5.48','57000',4);\n";
long WebSocketReceiveLen58   = sizeof(WebSocketReceive58) - 1;	// (record-time: 66 bytes)

#endif
