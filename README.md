# BT-Ventilator-Steuerung

 --- Das HC-05 BT-Modul ist nicht mit IOS-Geräten Kompatibel ---
 
Erlaubt es mit Hilfe von einem HC-05 Bluetooth-Modul und einem Arduino einen ventilator zu Steuern.
Der Arduino gibt, je nach empfangener Nachricht, ein Signal an das angeschlossene Relay:
  - 0: Low
  - 1: High
  - 2: 15 Min High dann Low
  - 3: 30 Min High dann Low
  - 4: 60 Min High dann Low
  - 5: 1 Min High dann Low

Der Arduino ist zwischen bei der Timerfunktion nicht ansprechbar. Das Signal kann also im Timermodus nicht manuell gesteuert werden.

Die Zeichnung zeigt den richtigen Anschluss mit einem zusätzlichen Schalter zum manuellen schalten des relays.

Die Android-App ermöglich es einem das BT-Modul zu verbinden, und die ensprchenden Signale bei Knopfdruck zu senden.
