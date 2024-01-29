# ultra_sonic_trainer
Anti-Ladridos Ultrasónico
Proyecto Anti-Ladridos Ultrasónico
Descripción
Este proyecto surgió como una solución pacífica a los desafíos que presenta la convivencia en comunidades donde, lamentablemente, no siempre se experimenta la empatía y la educación por parte de todos los vecinos. Ante la persistente problemática de perros que ladran de manera excesiva y disruptiva, este sistema busca ofrecer una terapia conductual alternativa y no invasiva.

El objetivo es educar al perro de manera que asocie el acto de ladrar excesivamente con una consecuencia desagradable (en este caso, un sonido ultrasónico que solo ellos pueden oír y que resulta incómodo pero no dañino). De esta forma, se espera que el perro aprenda gradualmente a moderar su comportamiento, reduciendo así los ladridos innecesarios y contribuyendo a un entorno más tranquilo y armónico para todos.

Componentes
Arduino (cualquier modelo compatible con los pines utilizados)
Módulo de micrófono con capacidad analógica
Potenciómetro (para ajuste manual de la frecuencia del sonido)
Altavoz o transductor ultrasónico
Botón (para encendido/apagado manual del sistema)
Resistencias, cables y protoboard para las conexiones
Funcionamiento
El sistema se basa en un Arduino que controla un transductor ultrasónico. El micrófono integrado detecta el sonido ambiental y, cuando identifica un volumen que supera un umbral predefinido (asociado con el ladrido de un perro), activa el transductor para emitir un sonido ultrasónico. Este sonido, aunque inaudible para los humanos, es desagradable para los perros y les alienta a cesar su ladrido.

Un potenciómetro permite ajustar la frecuencia del sonido ultrasónico, ofreciendo la posibilidad de encontrar la más efectiva para cada caso particular. Además, un botón incorporado permite encender y apagar el sistema manualmente, proporcionando un control adicional al usuario.

Instalación
Conecta el módulo de micrófono, el potenciómetro, el botón y el transductor ultrasónico al Arduino siguiendo el esquema de conexión proporcionado.
Carga el código fuente en el Arduino.
Ajusta el potenciómetro para calibrar la frecuencia del sonido ultrasónico según sea necesario.
Enciende el sistema y ajusta el umbral de activación del micrófono según el nivel de ladridos que quieras permitir antes de que el sistema se active.
Consideraciones Éticas
Este sistema está diseñado para ser una solución no invasiva y respetuosa tanto para los animales como para la comunidad. Se recomienda utilizar el dispositivo de manera consciente, ajustando correctamente los niveles de frecuencia y sensibilidad del micrófono para evitar molestias innecesarias a los perros y asegurando que el sonido ultrasónico se utilice solo como un estímulo negativo moderado y controlado.

Conclusión
El Proyecto Anti-Ladridos Ultrasónico es un intento de promover una coexistencia pacífica dentro de las comunidades, proporcionando una herramienta que pueda ayudar en la educación de las mascotas de manera respetuosa y efectiva. Se invita a los usuarios a compartir sus experiencias y sugerencias para mejorar continuamente la eficacia y la humanidad del sistema.