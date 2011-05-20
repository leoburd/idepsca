<?php

/**
 * Constant definitions
 */

define('IDEPSCA_MAX_STORY_DURATION', 300); // 300 seconds

define('IDEPSCA_ENGLISH', 'http://duke.edu/~ml117/IDEPSCA/InteractiveSystem.wavfiles/English/');
define('IDEPSCA_SPANISH', 'http://duke.edu/~ml117/IDEPSCA/InteractiveSystem.wavfiles/Spanish/');

// Messages associated with the idepsca_287g_welcome script

$welcome_msg_en = "Welcome to Idepsca’s interactive 2 8 7 g and Secure Communities Abuse Report System.";
$welcome_msg_es = "Bievenido al sistema interactivo de idepsca para reporter abusos de la 2 8 7 g y Comunidades Seguras.";
$welcome_msg = "$welcome_msg_en $welcome_msg_es";
$welcome_msg = IDEPSCA_ENGLISH . "20110425_105216.mp3";

$choose_spanish_msg = "Para escuchar el resto del mensaje en Espanol, precione el 2.";
$choose_spanish_msg = IDEPSCA_SPANISH . "20110425_110937.mp3";

// Messages associated with the idepsca_287g_script script

$system_description = 'This system will allow you to record your experience with anti-immigration laws in the State of California. These recordings will allow you to share your story to idepsca in an effort to let your voice be included in the digital public sphere and create awareness around abuse of power. Please Note: idepsca is a grassroots organization that advocated for the rights of low-income workers in the state of California. We are not a law firm. Any wishes to resort to legal action regarding your case should be consulted with an attorney and NOT with idepsca. To learn more about idepsca, visit us at www.idepsca.org or call us at (213) 252-2952';
$system_description = IDEPSCA_ENGLISH . '20110425_111647.mp3';
$script_options = "To learn more about 287 g, Press 1. To learn more about Secure Communities, Press 2. To learn more about Special Order 40, Press 3. To begin recording your experience, Press 4. To listen to legal resources you can access, press 5.";
$script_options = IDEPSCA_ENGLISH . '20110425_111900.mp3'
                  . ' ' . IDEPSCA_ENGLISH . '20110425_111920.mp3'
                  . ' ' . IDEPSCA_ENGLISH . '20110425_111943.mp3'
                  . ' ' . IDEPSCA_ENGLISH . '20110425_112002.mp3'
                  . ' ' . IDEPSCA_ENGLISH . '20110425_112201.mp3';
$invalid_msg = 'Invalid option selected';
$thank_you = "Thank you for using Idepsca's 2 8 7 g and Secure Communities Abuse Report System. To learn more about idepsca, please visit www.idepsca.org, or call us at (213) 252-2952.";
$thank_you = IDEPSCA_ENGLISH . '20110425_113210.mp3';

$system_description_es = 'Este sistema le permitirá grabar su experiencia con las leyes de anti-emigración en el estado de California. Esta grabación le permitirá compartir su historia con Idepsca como esfuerzo para incluir su voz en la esfera pública digital y documentar y exponer el abuso de poder. Por favor tome en cuenta: Idepsca es una organización de base que aboga por los derechos de trabajadores de bajos recursos en el estado de California. No somos un despacho de abogados. Si tiene algún deseo de tomar acción legal respecto a su caso, consúltelo con un abogado y NO con Idepsca. Para aprender mas sobre Idepsca, por favor visítenos en www.idepsca.org o llamenos al (213) 252-2952.';
$script_options_es = 'Para aprender más sobre la 287g, Presione 1. Para aprender más sobre Comunidades Seguras, Presione 2. Para aprender más sobre la Ordenanza Especial 40, Presione 3. Para empezar a grabar su experiencia, Presione 4. Para aprender sobre los recursos legales a los cuales pueda acudir, Presione 5.';
$invalid_msg_es = 'Opción inválida.';
$thank_you_es = 'Gracias por usar el Sistema Interactivo del Comité Anti-Ejecución de Idepsca Para Reportar Abusos de la Polimigra. Para aprender más sobre Idepsca, por favor visite www.idepsca.org o llámenos al 213.252.2952';



// Messages associated with the idepsca_287g_record_options script

$recording_note = 'Please note. If at any time you wish to stop this documentation process, simply hang up. All records completed prior to hanging up will be fully deleted from this system.';
$recording_note = IDEPSCA_ENGLISH . '20110425_112442.mp3';
$recording_menu = 'To record a story about an abuse by 2 8 7 g agents, Press 1. To record a story about an abuse by Secure Communities agents, Press 2. To record a story about an abuse by other law enforcement officers in California, Press 3.';
$recording_menu = 'To record a story about an abuse by 2 8 7 g agents, Press 1.'
                  . ' ' . IDEPSCA_ENGLISH . '20110425_112610.mp3'
                  . ' ' . IDEPSCA_ENGLISH . '20110425_112633.mp3';

$invalid_msg = 'Invalid option selected';

$recording_note_es = 'Por favor note que si en cualquier momento de este proceso decide que ya no quiere compartir su experiencia, puede simplemente colgar. Todos los archivos grabados antes de colgar serán completamente borrados de este sistema.';
$recording_menu_es = 'Para grabar una experiencia de un abuso de parte de un agente de la 287g, Presione 1. Para grabar una experiencia de un abuso de parte de un agente de Comunidades Seguras, Presione 2. Para grabar una experiencia sobre un abuso de parte de cualquier otro agente en el estado de California, Presione 3.';
$invalid_msg_es = 'Opción inválida.';


// Messages associated with the idepsca_287g_record_story script

$recording_prompt = 'At the beep, please record your story and, if possible, include the date, time and location of your incident. When you are finished, press the pound key.';
$recording_prompt = IDEPSCA_ENGLISH . '20110425_112729.mp3';
$recording_confirmation = 'You will hear a playback of your recording. If you are satisfied with your recording, press pound. If you would like to re-record, press the star key.';
$recording_confirmation = IDEPSCA_ENGLISH . '20110425_113038.mp3';
$final_confirmation = "You are about to fully include your story in IDEPSCA's archives. Please note that by agreeing to turn in your recording, you are giving up your right of property of the recording. IDEPSCA will now have the right to share your story. If you agree with this arrangement, press 1. If you disagree and would like all recordings to be erased, press 2.";
$final_confirmation = IDEPSCA_ENGLISH . '20110425_113119.mp3';
$story_accepted = 'Your story has been successfully recorded';
$story_rejected = 'Your story has been deleted from the system';

